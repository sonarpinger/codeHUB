// implements the ALU class, which is used to perform arithmetic and logical operations on 32-bit integers, while updating the flags in accordance to each operation.
#include "alu.h"

uint32_t ALU::add(uint32_t op1, uint32_t op2, bool updateFlags){
    uint32_t res = op1 + op2;
    if(updateFlags){
        V = checkOverflow(op1, op2, res);
        Z = (res == 0);
        N = checkMSB(res);
        C = (op1 & 0xFFFFFFFF) + (op2 & 0xFFFFFFFF) > 0xFFFFFFFF;
    }
    return res;
}
uint32_t ALU::andOp(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 & op2);
    if(updateFlags){
        Z = (res == 0);
        N = checkMSB(res);
    }
    return res;
}
uint32_t ALU::asr(int32_t op1, int32_t op2, bool updateFlags){
    int32_t res = (op1 >> op2);
    if(updateFlags){
        Z = (res == 0);
        N = checkMSB(res);
        C = op1 & (0x1 << op2 - 1);
    }
    return res;
}
uint32_t ALU::lsr(uint32_t op1 , int op2, bool updateFlags){
    uint32_t res = (op1 >> op2);
    if(updateFlags){
        Z = (res == 0);
        N = checkMSB(res);
        C = op1 & (0x1 << op2 - 1);
    }
    return res;
}
uint32_t ALU::lsl(uint32_t op1 , int op2, bool updateFlags){
    uint32_t res = (op1 << op2);
    if(updateFlags){
        Z = (res == 0);
        N = checkMSB(res);
        C = op1 & (0x80000000 >> op2 - 1);
    }
    return res;
}
uint32_t ALU::notOp(uint32_t op1, bool updateFlags){
    uint32_t res = (~op1);
    if(updateFlags){
        Z = (res == 0);
        N = checkMSB(res);
    }
    return res;
}
uint32_t ALU::orr(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 | op2);
    if(updateFlags){
        Z = (res == 0);
        N = checkMSB(res);
    }
    return res;
}
uint32_t ALU::sub(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 - op2);
    if(updateFlags){
        V = checkOverflow(op1, -op2, res);
        Z = (res == 0);
        N = checkMSB(res);
        C = op1 > op2;
    }
    return res;
}
uint32_t ALU::xorOp(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 ^ op2);
    if(updateFlags){
        Z = (res == 0);
        N = checkMSB(res);
    }
    return res;
}

uint32_t ALU::mov(uint32_t operand1, bool updateFlags){
    if(updateFlags){
        Z = (operand1 == 0);
        N = checkMSB(operand1);
    }
    return operand1;
}
uint32_t ALU::mvn(uint32_t operand1, bool updateFlags){
    uint32_t res = (~operand1);
    if(updateFlags){
        Z = (res == 0);
        N = checkMSB(res);
    }
    return res;
}
// outputs the current values of the flags
void ALU::outputNZCV(){
    std::cout << "<N:" << N << " Z:" << Z << " C:" << C << " V:" << V << ">" << std::endl;
}

// checks the most significant bit of a 32-bit integer
bool ALU::checkMSB(uint32_t eep){
    return ((eep >> 31) & 1);
}
bool ALU::checkMSB(int32_t eep){
    return ((eep >> 31) & 1);
}
// checks for overflow in a 32-bit integer
bool ALU::checkOverflow(uint32_t op1, uint32_t op2, uint32_t res){
    return (checkMSB(op1) & checkMSB(op2) & !checkMSB(res)) || (!checkMSB(op1) & !checkMSB(op2) & checkMSB(res));
}
bool ALU::checkOverflow(int32_t op1, int32_t op2, int32_t res){
    return (checkMSB(op1) & checkMSB(op2) & !checkMSB(res)) || (!checkMSB(op1) & !checkMSB(op2) & checkMSB(res));
}
// checks for carry in a 32-bit integer
bool ALU::checkCarry(uint32_t op1, uint32_t op2, uint32_t res){
    return (op1 & 0xFFFFFFFF) + (op2 & 0xFFFFFFFF) > 0xFFFFFFFF;
}
bool ALU::checkCarry(int32_t op1, int32_t op2, int32_t res){
    return (op1 & 0xFFFFFFFF) + (op2 & 0xFFFFFFFF) > 0xFFFFFFFF;
}