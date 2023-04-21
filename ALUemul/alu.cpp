#include "alu.h"

uint32_t ALU::add(uint32_t op1, uint32_t op2, bool updateFlags){
    uint32_t res = (op1 | op2) + (op1 & op2);
    if(updateFlags){
        updateNZCV(op1, op2, res);
    }
    return res;
}
uint32_t ALU::andOp(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 & op2);
    if(updateFlags){
        updateNZCV(op1, res);
    }
    return res;
}
uint32_t ALU::asr(int32_t op1, int32_t op2, bool updateFlags){
    int32_t res = (op1 >> op2);
    if(updateFlags){
        updateNZCV(op1, res);
    }
    return res;
}
uint32_t ALU::lsr(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 >> op2);
    if(updateFlags){
        updateNZCV(op1, res);
    }
    return res;
}
uint32_t ALU::lsl(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 << op2);
    if(updateFlags){
        updateNZCV(op1, res);
    }
    return res;
}
uint32_t ALU::notOp(uint32_t op1, bool updateFlags){
    uint32_t res = (~op1);
    if(updateFlags){
        updateNZCV(op1, res);
    }
    return res;
}
uint32_t ALU::orr(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 | op2);
    if(updateFlags){
        updateNZCV(op1, op2, res);
    }
    return res;
}
uint32_t ALU::sub(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 - op2);
    if(updateFlags){
        updateNZCV(op1, op2, res);
    }
    return res;
}
uint32_t ALU::xorOp(uint32_t op1 , uint32_t op2, bool updateFlags){
    uint32_t res = (op1 ^ op2);
    if(updateFlags){
        updateNZCV(op1, op2, res);
    }
    return res;
}


uint32_t ALU::mov(uint32_t operand1, bool updateFlags){
    if(updateFlags){
        updateNZCV(operand1);
    }
    return operand1;
}
uint32_t ALU::mvn(uint32_t operand1, bool updateFlags){
    uint32_t res = (~operand1);
    if(updateFlags){
        updateNZCV(res);
    }
    return res;
}
// signed 2 operand
void ALU::updateNZCV(int32_t op1, int32_t op2, int32_t res){

}
// signed 1 operand
void ALU::updateNZCV(int32_t res){
    if(res == 0){
        Z = 1;
    }else{
        Z = 0;
    }

    if((res >> 31) & 1){
        N = 1;
    }else{
        N = 0;
    }
}
// unsigned 2 operand
void ALU::updateNZCV(uint32_t op1, uint32_t op2, uint32_t res){

}
// unsigned 1 operand
void ALU::updateNZCV(uint32_t res){
    if(res == 0){
        Z = 1;
    }else{
        Z = 0;
    }

    if((res >> 31) & 1){
        N = 1;
    }else{
        N = 0;
    }
}

// unsigned 1 operand 1 result
void ALU::updateNZCV(uint32_t op1, uint32_t res){
    if(res == 0){
        Z = 1;
    }else{
        Z = 0;
    }

    if((res >> 31) & 1){
        N = 1;
    }else{
        N = 0;
    }
}

// signed 1 operand 1 result
void ALU::updateNZCV(int32_t op1, int32_t res){
    if(res == 0){
        Z = 1;
    }else{
        Z = 0;
    }

    if((res >> 31) & 1){
        N = 1;
    }else{
        N = 0;
    }
}

void ALU::outputNZCV(){
    std::cout << "<N:" << N << " Z:" << Z << " C:" << C << " V:" << V << ">" << std::endl;
}