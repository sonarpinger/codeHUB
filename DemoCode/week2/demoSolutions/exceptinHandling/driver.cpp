#include <iostream>
using namespace std;

#include "book.h"

#define MAX_BOOKS 5

void setBooks(Book[]);
void displayBooks(Book[]);
void setPrice(Book&, const Book&);

int main(){
	Book collection[MAX_BOOKS];
	setBooks(collection);
	displayBooks(collection);

	//copy constructor
	Book newBook = collection[0];
	newBook.setPrice(0);
	newBook.display();

	setPrice(newBook, collection[0]);
	newBook.display();
}

void setBooks(Book books[]){
	try{
		books[0].setTitle("The Fifth Season");
		books[0].setAuthor("N.K. Jemisin");
		books[0].setPublisher("Orbit");
		books[0].setYear(2015);
		books[0].setPrice(39.99);

		books[1].setTitle("The Marvelous Land of Oz");
		books[1].setAuthor("L. Frank Baum");
		books[1].setPublisher("Reilly & Britton");
		books[1].setYear(1904);
		books[1].setPrice(199.99);

		books[2].setTitle("The Hitchhiker's Guide to the Galaxy");
		books[2].setAuthor("Douglas Adams");
		books[2].setPublisher("Pan Books");
		books[2].setYear(1979);
		books[2].setPrice(-9.98);

		books[3].setTitle("The Olive's Pit");
		books[3].setAuthor("Erin Keith");
		books[3].setPublisher("Bantam");
		books[3].setYear(2049); //ruh roh!
		//nothing after the exception occurs executes
		books[3].setPrice(19.97);

		books[4].setTitle("The Gunslinger");
		books[4].setAuthor("Stephen King");
		books[4].setPublisher("Grant");
		books[4].setYear(1982);
		books[4].setPrice(9.99);	
	}
	//but the program doesn't break because we catch it here
	catch(const char* e){
		cout << e << endl << endl;
	}
	
}

void displayBooks(Book books[]){
	for(int i = 0; i < MAX_BOOKS; i++){
		cout << "*****" << i + 1 << "*****" << endl;
		books[i].display(); cout << endl;
	}
}

//we want to change the destination, not the source
void setPrice(Book& destination, const Book& source){
	if(destination.getTitle() == source.getTitle()){
		destination.setPrice(source.getPrice());
	}
}