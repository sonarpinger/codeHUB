brandon_ramirez_proj1: driver.o alu.o
	g++ -o brandon_ramirez_proj1 driver.o alu.o

driver.o: driver.cpp alu.h
	g++ -c driver.cpp

alu.o: alu.cpp alu.h
	g++ -c alu.cpp

clean:
	rm *.o brandon_ramirez_proj1