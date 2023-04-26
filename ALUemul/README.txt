Author: Brandon Ramirez
Project: Programming Project 3
Class: CS219

How to use the code:
The basic format of the ALU emulator is:
OPERATION Output Operand1 Operand2

To call the executable (on *NIX systems), you must use the format:

./programName InputFileName.txt

Ex: ./brandon_ramirez_proj3 Programming-Project-3.txt

How the code works:
The code takes input as a file, it then splits the file into lines and lines into individual strings in an array. It then parses that string by removing spaces, hashtags for immediate values, and commas if needed and adding the resulting strings into an array which represents the parts of the operation string, such as Operation, RegisterOutput, Operand1, and Operand2. The program then matches the strings to its appropriate function, such as a immediate value or register. The program then checks for the correct input and amount of inputs, halting if it detects an incorrect usage of the format. A operation is chosen based on the string in the Operation part of the string, and the run, and the system flags are updated if that is specified. The results of the operation are then put into an array representing the registers r0-r7, which are then displayed to the user along with the new/old values of the flags. The whole process repeats for each line in the file.

Results:
The program outputs the output of the requested operation as well as an indication of the system flags which may or may not change based on the operation. The output follows the basic format:

Input File Format:
OPERATION Output Operand1 Operand2
OPERATION Output Operand1 Operand2
OPERATION Output Operand1 Operand2
…


Output Format:
OPERATION Output Operand1 Operand2
<N:(0|1) Z:(0|1) C:(0|1) V:(0|1)>
R0:{xxx} R1:{xxx} R2:{xxx} R3:{xxx} R4:{xxx} R5:{xxx} R6:{xxx} R7:{xxx}
…
