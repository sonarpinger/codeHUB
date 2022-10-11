date: driver.o date.o
	g++ -o date driver.o date.o

driver.o: driver.cpp
	g++ -c driver.cpp

date.o: date.h date.cpp
	g++ -c date.cpp

clean:
	rm *.o date