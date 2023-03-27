#ifndef ALU_H
#define ALU_H
// #include "stdint.h"
#include <iostream>

class ALU{
    enum function {f_and, f_nand, f_or, f_nor, f_xor, f_not, f_add, f_sub};
    public:
        uint32_t add(uint32_t, uint32_t, bool);
        uint32_t andOp(uint32_t, uint32_t, bool);
        uint32_t asr(int32_t, int32_t, bool);
        uint32_t lsr(uint32_t, uint32_t, bool);
        uint32_t lsl(uint32_t, uint32_t, bool);
        uint32_t notOp(uint32_t, bool);
        uint32_t orr(uint32_t, uint32_t, bool);
        uint32_t sub(uint32_t, uint32_t, bool);
        uint32_t xorOp(uint32_t, uint32_t, bool);
        void giveFlags1OperandUnSigned(uint32_t, uint32_t);
        void giveFlags2OperandUnSigned(uint32_t, uint32_t, uint32_t);
        void giveFlags1OperandSigned(int32_t, int32_t);
        void giveFlags2OperandSigned(int32_t, int32_t, int32_t);
        void didOverflow(uint32_t, uint32_t, uint32_t, int);
};
#endif