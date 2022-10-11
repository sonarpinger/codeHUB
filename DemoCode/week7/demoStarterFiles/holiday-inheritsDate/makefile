holiday: date.o holiday.o driver.o
	g++ -o holiday date.o holiday.o driver.o
date.o: date.h date.cpp
	g++ -c date.cpp
holiday.o: holiday.h holiday.cpp date.h 
	g++ -c holiday.cpp
driver.o: driver.cpp holiday.h date.h 
	g++ -c driver.cpp 
clean:
	rm *.o holiday