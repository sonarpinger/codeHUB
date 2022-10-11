#define MAXDAYS 12

#ifndef HOLDAY_H
#define HOLIDAY_H

#include <iostream>
using namespace std;

#include "date.h" //has-a relationship

class Holiday: public Date{
    int numDays;
    string name;

    Date holidayDate;

    public:
        Holiday();
        Holiday(int, string, Date);
        Holiday(const Holiday&);

        int getNumDays() const;
        void setNumDays(const int);
        string getName() const;
        void setName(const string);
        void addDate(const Date);
        Date getDates();

};
#endif