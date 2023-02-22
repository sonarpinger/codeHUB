#include <sstream>
#include "alu.h"

int main(){
    ALU testALU;
    uint32_t add1;
    uint32_t add2;

    std::string inputString;

    std::getline(std::cin, inputString);

    if(inputString.substr(0,4).compare("ADD ") == 0){
        int i = 0;
        std::string arr[3];
        std::istringstream ssin(inputString);
        while(ssin.good() && i < 3){
            ssin >> arr[i];
            ++i;
        }
        std::string op1 = arr[1];
        std::string op2 = arr[2];

        if(op1 == "" || op2 == ""){
            std::cout << "Incomplete ADD usage!" << std::endl;
            return 0;
        }
        add1 = std::stoul(op1, NULL, 16);
        add2 = std::stoul(op2, NULL, 16);

        uint32_t result = testALU.add(add1, add2);
        std::cout << inputString << ": " << std::hex << "0x" << result << std::endl;

    }else{
        std::cout << "Unknown Operation!" << std::endl;
    }
}