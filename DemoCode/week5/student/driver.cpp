//PA3: Aggregation
//Author: Sara Davis
//Date: 6/15/22
//Purpose: Create Student Management Software

#include <iostream>
#include <fstream>

#include "student.h"
#include "course.h"

using namespace std;

#define NUM_ARGS 2
#define MAX_STUDENTS 100

int getStudents(int, Student[], string);
int getMenuChoice();
int getStudentOption(int, Student[]);
void addCourses(Student&);

int main(int argc, char const *argv[]){
	if(argc < NUM_ARGS){
		cout <<"Correct usage:" << endl;
		cout << argv[0] <<" filename" << endl;
		return 0;
	}

	Student roster[MAX_STUDENTS], maxStudent;
	int numStudents = getStudents(MAX_STUDENTS, roster, argv[1]);
	int menuChoice, studentOption;

	do{
		menuChoice = getMenuChoice();
		switch(menuChoice){
			case 0:
				break;
			case 2:
				studentOption = getStudentOption(numStudents, roster);
				addCourses(roster[studentOption]);
				break;
			default:
				cout << "Please enter a valid option" << endl;
		}
	}while(menuChoice != 0);
	
	return 0;
}

int getStudents(int size, Student students[], string filename)
{
	ifstream inFile(filename.c_str());	
	int tempNum, rowInd = 0;
	string tempFirst, tempLast;
	float tempGpa;

	if(!inFile){
		cout <<"Sorry, could not open " << filename << " for reading" << endl;
		exit(0);
	}
	else{		
		do{
			inFile >> tempNum >> tempLast >> tempFirst >> tempGpa;
			if(inFile){
				students[rowInd].setFirstName(tempFirst);
				students[rowInd].setLastName(tempLast);
				rowInd++;
			}
		}while(inFile && rowInd < size);
		inFile.close();
	}

	return rowInd;
}

int getMenuChoice(){
	int userChoice;

	cout << endl;
	cout << "STUDENT MANAGEMENT SYSTEM" << endl;
	cout << "================================" << endl;
	cout << "2.\tAdd Courses" << endl;
	cout << "0.\tEXIT" << endl;

	cin >> userChoice;
	return userChoice;
}



int getStudentOption(int numStudents, Student students[]){
	int studentOption;

	do{
		cout << "Option\tFirst\tLast" << endl;
		cout << "======================" << endl;

		for(int student = 0; student < numStudents; student++){
			cout << student + 1 << ".\t";
			cout << students[student].getFirstName() << '\t' << students[student].getLastName() << endl;
		}	
		
		cout << "Choose the student option number: ";
		cin >> studentOption;		
	}while (studentOption > numStudents || studentOption < 1);


	return studentOption - 1;
}



void addCourses(Student& student){
	int numNewCourses = 0, newNumber, numCurrentCourses = student.getNumCourses();
	string newPrefix, newName;

	if(numCurrentCourses < MAX_COURSES){
		cout << "How many courses would you like to add? ";
		cin >> numNewCourses;		

		for(int i = numCurrentCourses; i < numNewCourses + numCurrentCourses; i++){
			cout << "Enter the course prefix, number, and name: ";
			cin >> newPrefix >> newNumber;
			getline(cin, newName);
			//create a course
			//add the course to the student's course array
		}		
	}

}
