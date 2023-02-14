#ifndef ALU_H
#define ALU_H
// #include "stdint.h"
#include <iostream>

class ALU{
    enum function {f_and, f_nand, f_or, f_nor, f_xor, f_not, f_add, f_sub};
    public:
        uint32_t add(uint32_t, uint32_t);
        void didOverflow(uint32_t, uint32_t, uint32_t, int);
};
#endif