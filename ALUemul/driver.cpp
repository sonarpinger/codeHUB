#include <sstream>
#include <algorithm>
#include <fstream>
#include "alu.h"

// Name: Brandon Ramirez


// What to do;
// deal with C and V flags

int main(int argc, char *argv[]){
    ALU testALU;
    uint32_t operator1;
    uint32_t operator2;

    uint32_t registers[8] = { 0 };

    std::string inputString;
    std::string copyString;
    std::fstream file (argv[1]);

    if(argc < 2){
        std::cout << "No Input File! Check README" << std::endl;
        return 1;
    }

    while(file){
        std::getline(file, inputString);

        if(inputString == ""){
            continue;
        }
        if(inputString[inputString.length()-1] == '\r') {
            inputString.erase(inputString.length()-1);
        }

        copyString = inputString;
        std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);
        std::transform(copyString.begin(), copyString.end(), copyString.begin(), ::toupper);
        std::cout << std::endl;
        std::cout << std::endl;

        int i = 0;
        std::string arr[4];
        std::istringstream ssin(inputString);
        while(ssin.good() && i <= 3){
            ssin >> arr[i];
            ++i;
        }

        std::string reg = arr[1];
        std::string op1 = arr[2];
        std::string op2 = arr[3];
        bool oneOperand = 0;
        if(inputString.substr(0,3).compare("not") == 0){
            oneOperand = 1;
        }else if(inputString.substr(0,3).compare("mov") == 0){
            oneOperand = 1;
        }else if(inputString.substr(0,3).compare("mvn") == 0){
            oneOperand = 1;
        }
        else if(inputString.substr(0,3).compare("cmp") == 0){
            oneOperand = 1;
        }
        else if(inputString.substr(0,3).compare("tst") == 0){
            oneOperand = 1;
        }
        if(op1.front() == '#'){
            oneOperand = 1;
            op1.erase(0, 1);
        }
        if(op1.back() == ','){
            op1.erase(reg.length() - 1);
        }
        if(op2.back() == ','){
            op2.erase(reg.length() - 1);
        }
        if(reg.back() == ','){
            reg.erase(reg.length() - 1);
        }

        std::size_t pos1;
        std::size_t pos2;
        try{
            if(oneOperand){
                if(op1.substr(0,1).compare("r") == 0){
                    int op1Selector = std::stoi(op1.substr(1,1));
                    operator1 = registers[op1Selector];
                }else{
                    operator1 = std::stoul(op1, &pos1, 16);
                    if(op2 != ""){
                        operator2 = std::stoul(op2, &pos2, 16);
                        if(pos1 != op1.size() || pos2 != op2.size()){
                            std::cout << "Invalid Operator Argument! Check README" << std::endl;
                            return 1;
                        }
                    }
                }
            }else{
                int op1Selector = std::stoi(op1.substr(1,1));
                int op2Selector = std::stoi(op2.substr(1,1));
                operator1 = registers[op1Selector];
                operator2 = registers[op2Selector];
            }
        }catch(std::invalid_argument e){
            std::cerr  << "Invalid ValueType Argument! Check README" << std::endl;
            return 1;
        }

        uint32_t result;
        bool updateFlags = 0;
        if(inputString.substr(3,1).compare("s") == 0){
            updateFlags = 1;
        }
        if(inputString.substr(0,3).compare("cmp") == 0){
            testALU.sub(operator1, operator2, true); //always gives flags
        }else if(inputString.substr(0,3).compare("tst") == 0){
            testALU.andOp(operator1, operator2, true); //always gives flags
        }else if(inputString.substr(0,3).compare("mov") == 0){
            result = testALU.mov(operator1, updateFlags);
        }else if(inputString.substr(0,3).compare("mvn") == 0){
            result = testALU.mvn(operator1, updateFlags);
        }else if(inputString.substr(0,3).compare("add") == 0){
            result = testALU.add(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("and") == 0){
            result = testALU.andOp(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("asr") == 0){
            result = testALU.asr(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("lsr") == 0){
            result = testALU.lsr(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("lsl") == 0){
            result = testALU.lsl(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("not") == 0){
            result = testALU.notOp(operator1, updateFlags);
        }else if(inputString.substr(0,3).compare("orr") == 0){
            result = testALU.orr(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("sub") == 0){
            result = testALU.sub(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("xor") == 0){
            result = testALU.xorOp(operator1, operator2, updateFlags);
        }else{
            std::cout << "Unknown Operation! Check README" << std::endl;
            return 1;
        }

        if(reg.substr(0,2).compare("r0") == 0){
            registers[0] = result;
        }else if(reg.substr(0,2).compare("r1") == 0){
            registers[1] = result;
        }else if(reg.substr(0,2).compare("r2") == 0){
            registers[2] = result;
        }else if(reg.substr(0,2).compare("r3") == 0){
            registers[3] = result;
        }else if(reg.substr(0,2).compare("r4") == 0){
            registers[4] = result;
        }else if(reg.substr(0,2).compare("r5") == 0){
            registers[5] = result;
        }else if(reg.substr(0,2).compare("r6") == 0){
            registers[6] = result;
        }else if(reg.substr(0,2).compare("r7") == 0){
            registers[7] = result;
        }

        std::cout << std::endl;
        std::cout << copyString << std::endl;
        // output flags
        testALU.outputNZCV();
        for(int i = 0; i < 8; i++){
            std::cout << "R" << i << ": " << std::hex << "0x" << registers[i];
            if(i != 7){
                std::cout << "   ";
            }
        }
        if(file.eof()){
            break;
        }
    }
}