#include <sstream>
#include <fstream>
#include "alu.h"

// Name: Brandon Ramirez


// What to do;
// parse 2 registers as inputs
// deal with CMP and TST
// deal with C and V flags

// one operand
// if not, mvn, mov
//  // no immediate val
// // get values from register array
// else
// // take value of op2 litterally

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
        if(inputString.substr(0,3).compare("NOT") == 0){
            oneOperand = 1;
        }else if(inputString.substr(0,3).compare("MOV") == 0){
            oneOperand = 1;
        }else if(inputString.substr(0,3).compare("MVN") == 0){
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

        // debug for loop
        for(int i = 0; i < 4; i++){
            std::cout << arr[i] << std::endl;
        }
        std::cout << "Registers: " << reg << std::endl;
        std::cout << "Operand 1: " << op1 << std::endl;
        std::cout << "Operand 2: " << op2 << std::endl;
        std::cout << "oneOperand: " << oneOperand << std::endl;

        std::size_t pos1;
        std::size_t pos2;
        try{
            operator1 = std::stoul(op1, &pos1, 16);
            if(!oneOperand){
                operator2 = std::stoul(op2, &pos2, 16);
                if(pos1 != op1.size() || pos2 != op2.size()){
                    std::cout << "Invalid Operator Argument! Check README" << std::endl;
                    return 1;
                }
            }
        }catch(std::invalid_argument e){
            std::cerr  << "Invalid ValueType Argument! Check README" << std::endl;
            return 1;
        }
        std::cout << "Operand 1: " << operator1 << std::endl;
        std::cout << "Operand 2: " << operator2 << std::endl;

        uint32_t result;
        bool updateFlags = 0;
        if(inputString.substr(3,1).compare("S") == 0){
            updateFlags = 1;
        }
        if(inputString.substr(0,3).compare("MOV") == 0){
            result = testALU.mov(operator1, updateFlags);
        }else if(inputString.substr(0,3).compare("MVN") == 0){
            result = testALU.mvn(operator1, updateFlags);
        }else if(inputString.substr(0,3).compare("ADD") == 0){
            result = testALU.add(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("AND") == 0){
            result = testALU.andOp(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("ASR") == 0){
            result = testALU.asr(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("LSR") == 0){
            result = testALU.lsr(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("LSL") == 0){
            result = testALU.lsl(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("NOT") == 0){
            result = testALU.notOp(operator1, updateFlags);
        }else if(inputString.substr(0,3).compare("ORR") == 0){
            result = testALU.orr(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("SUB") == 0){
            result = testALU.sub(operator1, operator2, updateFlags);
        }else if(inputString.substr(0,3).compare("XOR") == 0){
            result = testALU.xorOp(operator1, operator2, updateFlags);
        }else{
            std::cout << "Unknown Operation! Check README" << std::endl;
            return 1;
        }

        if(reg.substr(0,2).compare("R0") == 0){
            registers[0] = result;
        }else if(reg.substr(0,2).compare("R1") == 0){
            registers[1] = result;
        }else if(reg.substr(0,2).compare("R2") == 0){
            registers[2] = result;
        }else if(reg.substr(0,2).compare("R3") == 0){
            registers[3] = result;
        }else if(reg.substr(0,2).compare("R4") == 0){
            registers[4] = result;
        }else if(reg.substr(0,2).compare("R5") == 0){
            registers[5] = result;
        }else if(reg.substr(0,2).compare("R6") == 0){
            registers[6] = result;
        }else if(reg.substr(0,2).compare("R7") == 0){
            registers[7] = result;
        }

        for(int i = 0; i < 8; i++){
            std::cout << "r" << i << ": " << std::hex << "0x" << registers[i] << "   ";
        }
        std::cout << std::endl;
        std::cout << copyString << ": " << std::hex << "0x" << result << std::endl;
        // output flags
        testALU.outputNZ();
        if(file.eof()){
            break;
        }
    }
}