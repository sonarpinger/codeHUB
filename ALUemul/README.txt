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
The code takes input as a file, it then splits the file into lines and lines into individual strings. It then parses that string by removing spaces and adding the resulting strings into an array which represents the registers. The program then matches operand1 to the second index in that array, or the first operand as dictated by the format of the file. The same is done for the second operand, if needed, and the output register, if needed. The program then checks for the correct input and amount of inputs, halting if it detects an incorrect usage of the format. A operation is run, and the system flags are updated if that is specified. The results are then displayed to the user. The whole process repeats for each line in the file.

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