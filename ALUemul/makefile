ALUemul: driver.o alu.o
	g++ -o ALUemul driver.o alu.o

driver.o: driver.cpp alu.h
	g++ -c driver.cpp

alu.o: alu.cpp alu.h
	g++ -c alu.cpp

clean:
	rm *.o ALUemul