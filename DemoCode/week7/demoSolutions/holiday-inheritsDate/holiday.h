#define MAXDAYS 12

#ifndef HOLDAY_H
#define HOLIDAY_H

#include <iostream>
using namespace std;

#include "date.h" //has a relationship 

class Holiday : public Date{ //holiday now inherits day, month, year from date; this code only works for single date holidays
    string name;


    public:
        Holiday();
        Holiday(string, int, int, int);
        Holiday(const Holiday&);


        string getName() const;
        void setName(const string);

        void printDate();


};
#endif