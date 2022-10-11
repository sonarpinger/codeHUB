student_mgmt: driver.o student.o course.o
	g++ -o student_mgmt driver.o student.o course.o

driver.o: driver.cpp student.h course.h
	g++ -c driver.cpp

student.o: student.cpp student.h course.h
	g++ -c student.cpp

course.o: course.cpp course.h
	g++ -c course.cpp

clean:
	rm *.o