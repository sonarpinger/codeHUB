#include "alu.h"

uint32_t ALU::add(uint32_t op1, uint32_t op2){
    // returns the bitwise of the both 32 bit unsigned numbers combined
    // with the bitwise and of the both numbers and returns it, emulating
    // the functionality of the low level registers
    return (op1 | op2) + (op1 & op2);
}

bool ALU::didOverflow(uint32_t op1, uint32_t op2, uint32_t res, int func){
    
}