shapeExecutable: shapeDriver.o shape.o triangle.o
	g++ -o shapeExecutable shapeDriver.o shape.o triangle.o

shapeDriver.o: shapeDriver.cpp triangle.h shape.h
	g++ -c shapeDriver.cpp

shape.o: shape.cpp shape.h
	g++ -c shape.cpp

# circle.o: 
# 	g++ -c 

triangle.o: triangle.cpp triangle.h shape.h
	g++ -c triangle.cpp

# trapezoid.o:
# 	g++ -c 

clean:
	rm *.o shapeExecutable