shapes: driver.o perimeter.o
	g++ -o shapes driver.o perimeter.o

driver.o: driver.cpp perimeter.h
	g++ -c driver.cpp

perimeter.o: perimeter.cpp perimeter.h
	g++ -c perimeter.cpp

clean:
	rm *.o