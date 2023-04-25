#ifndef ALU_H
#define ALU_H
#include "stdint.h"
#include <iostream>

class ALU{
    // enum function {f_and, f_nand, f_or, f_nor, f_xor, f_not, f_add, f_sub};
    bool N = false;
    bool Z = false;
    bool C = false;
    bool V = false;

    bool checkMSB(uint32_t eep);
    bool checkMSB(int32_t eep);
    bool checkOverflow(uint32_t op1, uint32_t op2, uint32_t res);
    bool checkOverflow(int32_t op1, int32_t op2, int32_t res);
    bool checkCarry(uint32_t op1, uint32_t op2, uint32_t res);
    bool checkCarry(int32_t op1, int32_t op2, int32_t res);

    public:
        uint32_t add(uint32_t, uint32_t, bool);
        uint32_t andOp(uint32_t, uint32_t, bool);
        uint32_t asr(int32_t, int32_t, bool);
        uint32_t lsr(uint32_t, int, bool);
        uint32_t lsl(uint32_t, int, bool);
        uint32_t notOp(uint32_t, bool);
        uint32_t orr(uint32_t, uint32_t, bool);
        uint32_t sub(uint32_t, uint32_t, bool);
        uint32_t xorOp(uint32_t, uint32_t, bool);
        uint32_t mov(uint32_t, bool);
        uint32_t mvn(uint32_t, bool);

        void outputNZCV();
};
#endif