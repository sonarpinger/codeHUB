#include "alu.h"

uint32_t ALU::add(uint32_t op1, uint32_t op2, bool giveFlags){
    // returns the bitwise of the both 32 bit unsigned numbers combined
    // with the bitwise and of the both numbers and returns it, emulating
    // the functionality of the low level registers
    uint32_t res = (op1 | op2) + (op1 & op2);
    // uint32_t res = op1 + op2;
    // calls overflow detector function
    // didOverflow(op1, op2, res, f_add);
    return res;
}
uint32_t ALU::andOp(uint32_t op1 , uint32_t op2, bool giveFlags){
    uint32_t res = (op1 & op2);
    // didOverflow(op1, op2, res, f_and);
    return res;
}
uint32_t ALU::asr(int32_t op1, int32_t op2, bool giveFlags){
    uint32_t res = (op1 >> op2);
    // didOverflow(op1, op2, res, f_and);
    return res;
}
uint32_t ALU::lsr(uint32_t op1 , uint32_t op2, bool giveFlags){
    uint32_t res = (op1 >> op2);
    // didOverflow(op1, op2, res, f_and);
    return res;
}
uint32_t ALU::lsl(uint32_t op1 , uint32_t op2, bool giveFlags){
    uint32_t res = (op1 << op2);
    // didOverflow(op1, op2, res, f_and);
    return res;
}
uint32_t ALU::notOp(uint32_t op1, bool giveFlags){
    uint32_t res = (~op1);
    // didOverflow(op1, op2, res, f_and);
    return res;
}
uint32_t ALU::orr(uint32_t op1 , uint32_t op2, bool giveFlags){
    uint32_t res = (op1 | op2);
    // didOverflow(op1, op2, res, f_and);
    return res;
}
uint32_t ALU::sub(uint32_t op1 , uint32_t op2, bool giveFlags){
    uint32_t res = (op1 - op2);
    // didOverflow(op1, op2, res, f_and);
    return res;
}
uint32_t ALU::xorOp(uint32_t op1 , uint32_t op2, bool giveFlags){
    uint32_t res = (op1 ^ op2);
    // didOverflow(op1, op2, res, f_and);
    return res;
}

void ALU::giveFlags2OperandSigned(int32_t op1, int32_t op2, int32_t res){

}
void ALU::giveFlags1OperandSigned(int32_t op1, int32_t res){

}
void ALU::giveFlags2OperandUnSigned(uint32_t op1, uint32_t op2, uint32_t res){

}
void ALU::giveFlags1OperandUnSigned(uint32_t op1, uint32_t res){

}



// method that takes in operands, result of ALU function, and the ALU function code
// and determines if an overflow event hath occured
void ALU::didOverflow(uint32_t op1, uint32_t op2, uint32_t res, int func){
    switch (func)
    {
    case 6:
        if(res < op1 || res < op2){
            std::cout << "Overflow: yes" << std::endl;
        } else{
            std::cout << "Overflow: no" << std::endl;
        }
        break;

    default:
        break;
    }
}