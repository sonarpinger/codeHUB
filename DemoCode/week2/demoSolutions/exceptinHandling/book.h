#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
using namespace std;

class Book{
	string title, author, publisher;
	double price;
	int copyrightYear;
public:
	Book();
	Book(string, string, int, double);
	Book(string, string, string, int, double);
	Book(const Book&);

	string getTitle() const;
	string getAuthor() const;
	string getPublisher() const;
	int getYear() const;
	double getPrice() const;

	void setTitle(string);
	void setAuthor(string);
	void setPublisher(string);
	void setYear(int);
	void setPrice(double);

	void display();
};

#endif