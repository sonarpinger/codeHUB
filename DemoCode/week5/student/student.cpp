#include "student.h"

//Constructors
Student::Student(){
	firstName = "";
	lastName = "";
	numCourses = 0;
	Course newCourse;
	schedule[numCourses] = newCourse;
}
Student::Student(string newFName, string newLName, Course newSchedule[]){
	
	setFirstName(newFName);
	setLastName(newLName);
	for(int i = 0; i < numCourses; i++){
		schedule[i] = newSchedule[i];
	}
}
Student::Student(const Student& other){
	
	setFirstName(other.firstName);
	setLastName(other.lastName);
	for(int i = 0; i < numCourses; i++){
		schedule[i] = other.schedule[i];
	}
}
//Getters
string Student::getFirstName(){
	return firstName;
}
string Student::getLastName(){
	return lastName;
}

//add getSchedule
Course* getSchedule(){
	return Course[];
}
//add getNumberCourses
int Student::getnumCourses(){
	return numCourses;
}
//Setters

void Student::setFirstName(string newFName){
	firstName = newFName;
}
void Student::setLastName(string newLName){
	lastName = newLName;
}


//Other
//add addcourse
void Student::addCourse(Course newCourse){
	schedule[numCourses] = newCourse;
	numCourses++;
}