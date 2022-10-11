#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>

using namespace std;

#include "course.h"

#define MAX_COURSES 7

class Student{
	string firstName, lastName;
	int numCourses;
	Course schedule[MAX_COURSES];

	public:

		Student();
		Student(const Student&);
		Student(string, string, Course[]);


		string getFirstName();
		string getLastName();
		//add numCourses getter
		int getnumCourses();
		//add course array getter
		Course* getSchedule();
		//Setters

		void setFirstName(string);
		void setLastName(string);

		//Other (add course)
		void addCourse(Course);

};

#endif