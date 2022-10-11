#include "course.h"

//Constructors
Course::Course(){
	setPrefix("");
	setNumber(0);
	setName("");
}
Course::Course(string newPrefix, int newNumber, string newName){
	setPrefix(newPrefix);
	setNumber(newNumber);
	setName(newName);
}
Course::Course(const Course& rhs){
	setPrefix(rhs.prefix);
	setNumber(rhs.number);
	setName(rhs.name);
}
//Getters
string Course::getPrefix(){
	return prefix;
}
int Course::getNumber(){
	return number;
}
string Course::getName(){
	return name;
}
//Setters
void Course::setPrefix(string newPrefix){
	prefix = newPrefix;
}
void Course::setNumber(int newNumber){
	number = newNumber;
}
void Course::setName(string newName){
	name = newName;
}
//Display
void Course::print(){
	cout << prefix << number << ": " << name << endl;
}