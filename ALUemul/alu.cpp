#include "alu.h"

uint32_t ALU::add(uint32_t op1, uint32_t op2){
    // returns the bitwise of the both 32 bit unsigned numbers combined
    // with the bitwise and of the both numbers and returns it, emulating
    // the functionality of the low level registers
    uint32_t res = (op1 | op2) + (op1 & op2);
    // calls overflow detector function
    didOverflow(op1, op2, res, 1);
    return res;
}

// method that takes in operands, result of ALU function, and the ALU function code
// and determines if an overflow event hath occured
void ALU::didOverflow(uint32_t op1, uint32_t op2, uint32_t res, int func){
    switch (func)
    {
    case 1:
        if(res > 65335){
            std::cout << "Overflow Detected!" << std::endl;
        }
        break;

    default:
        break;
    }
}