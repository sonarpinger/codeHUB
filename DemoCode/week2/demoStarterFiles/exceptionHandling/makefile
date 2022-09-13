bookstore: driver.o book.o
	g++ -o bookstore driver.o book.o

driver.o: driver.cpp book.h
	g++ -c driver.cpp

book.o: book.cpp book.h
	g++ -c book.cpp

clean :
	rm bookstore *.o
