#include "alu.h"
#include <iostream>

int main(){
    ALU testALU;
    uint32_t add1;
    uint32_t add2;
    std::cout << "Enter a 32 bit unsigned hex value" << std::endl; 
    std::cin >> std::hex >> add1;
    std::cout << "Entered : " << std::dec << add1 << " (translated to decimal)" << std::endl;
    std::cout << "Enter another 32 bit unsigned hex value" << std::endl;
    std::cin >> std::hex >> add2;
    std::cout << "Entered : " << std::dec << add2 << " (translated to decimal)" << std::endl;
    uint32_t result = testALU.add(add1, add2);
    std::cout << std::hex << result << std::endl;
    std::cout << "Returned : " << std::dec << result << " (translated to decimal)" << std::endl;
}