#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course{
	string prefix;
	int number;
	string name;
public:
	//Constructors
	Course();
	Course(string, int, string);
	Course(const Course&);
	//Getters
	string getPrefix();
	int getNumber();
	string getName();
	//Setters
	void setPrefix(string);
	void setNumber(int);
	void setName(string);
	//Display
	void print();
};

#endif