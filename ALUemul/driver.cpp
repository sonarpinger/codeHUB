#include <sstream>
#include <fstream>
#include "alu.h"

// Name: Brandon Ramirez


int main(int argc, char *argv[]){
    ALU testALU;
    uint32_t add1;
    uint32_t add2;

    std::string inputString;
    std::fstream file (argv[1]);

    while(file){
        std::getline(file, inputString);

        if(inputString == ""){
            return 0;
        }
        std::cout << std::endl;
        std::cout << std::endl;

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
                return 1;
            }
            std::size_t pos1;
            std::size_t pos2;
            try{
                add1 = std::stoul(op1, &pos1, 16);
                add2 = std::stoul(op2, &pos2, 16);
                if(pos1 != op1.size() || pos2 != op2.size()){
                    std::cout << "Invalid Argument!" << std::endl;
                    return 1;
                }
            }catch(std::invalid_argument e){
                std::cerr  << "Invalid Argument!" << std::endl;
                return 1;
            }

            uint32_t result = testALU.add(add1, add2);
            std::cout << inputString << ": " << std::hex << "0x" << result << std::endl;

        }else{
            std::cout << "Unknown Operation!" << std::endl;
            return 1;
        }
    }
}