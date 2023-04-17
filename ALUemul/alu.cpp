#include "alu.h"

uint32_t ALU::add(uint32_t op1, uint32_t op2, bool updateFlags){
    uint32_t res = (op1 | op2) + (op1 & op2);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
uint32_t ALU::andOp(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 & op2);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
uint32_t ALU::asr(int32_t op1, int32_t op2, bool updateFlags){
    int32_t res = (op1 >> op2);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
uint32_t ALU::lsr(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 >> op2);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
uint32_t ALU::lsl(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 << op2);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
uint32_t ALU::notOp(uint32_t op1, bool updateFlags){
    uint32_t res = (~op1);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
uint32_t ALU::orr(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 | op2);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
uint32_t ALU::sub(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 - op2);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
uint32_t ALU::xorOp(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 ^ op2);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}

void ALU::updateNZ(uint32_t result){
    if(result == 0){
        Z = 1;
    }else{
        Z = 0;
    }

    if((result >> 31) & 1){
        N = 1;
    }else{
        N = 0;
    }
}
void ALU::updateNZ(int32_t result){
    if(result == 0){
        Z = 1;
    }else{
        Z = 0;
    }

    if((result >> 31) & 1){
        N = 1;
    }else{
        N = 0;
    }
}

uint32_t ALU::mov(uint32_t operand1, bool updateFlags){
    if(updateFlags){
        updateNZ(operand1);
    }
    return operand1;
}
uint32_t ALU::mvn(uint32_t operand1, bool updateFlags){
    uint32_t res = (~operand1);
    if(updateFlags){
        updateNZ(res);
    }
    return res;
}
// // signed 2 operand
// void ALU::giveFlags(int32_t op1, int32_t op2, int32_t res){

// }
// // signed 1 operand
// void ALU::giveFlags(int32_t op1, int32_t res){

// }
// // unsigned 2 operand
// void ALU::giveFlags(uint32_t op1, uint32_t op2, uint32_t res){

// }
// // unsigned 1 operand
// void ALU::giveFlags(uint32_t op1, uint32_t res){

// }

void ALU::outputNZ(){
    std::cout << "<N:" << N << " Z:" << Z << ">" << std::endl;
}