#ifndef ALU_H
#define ALU_H
#include "stdint.h"
#include <iostream>

class ALU{
    public:
        uint32_t add(uint32_t, uint32_t);
        void didOverflow(uint32_t, uint32_t, uint32_t, int);
};
#endif