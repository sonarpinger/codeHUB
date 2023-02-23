Author: Brandon Ramirez
Project: Programming Project 1
Class: CS219

How to use the code:
The basic format of the ALU emulator is:
OPERATION Operand1 Operand2
This is so the emulator matches the syntax that is used in assembly instructions. Right now there is only an ADD instruction implemented.

Input must match the format exactly! Stating the operation and the 2 operands is required each time the program is used!

To call the executable (on *NIX systems), you must use the format:

./programName InputFileName.txt

Ex: ./brandon_ramirez_proj1 Programming-Project-1.txt

How the code works:
The code takes input as a file, it then splits the file into lines and lines into individual strings. It then parses that string by removing spaces and adding the resulting strings into a string array. The program then matches operand1 to the second index in that array, or the first operand as dictated by the format of the file. The same is done for the second operand. The program then checks for the correct input and amount of inputs, halting if it detects an incorrect usage of the format. Finally, the ADD method is used to add the two operands together. Additionally, a check for an unsigned addition overflow, which occurs when the result is less than the operands, is performed. The results are then displayed to the user. The whole process repeats for each line in the file.

Results:
The program outputs the output of the addition operation as well as an indication of the overflow status of the operation. The output follows the basic format:


Input File Format:
OPERATION Operand1 Operand2
OPERATION Operand1 Operand2
OPERATION Operand1 Operand2
…


Output Format:
Overflow: <yes/no>
OPERATION Operand1 Operand2: <result>
…