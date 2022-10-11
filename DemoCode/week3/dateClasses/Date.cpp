#include "Date.h"

#include <iostream>

//default constructor
Date::Date(){
    m = 0;
    d = 0;
    y = 0;
};

//parameterized constructor
Date::Date(int a, int b, int c){
     m = a;
     d = b;
     y = c;
}

//copy contructor
Date::Date(const Date& oldDate): Date::Date(oldDate.m, oldDate.d, oldDate.y){

}


//method definitions
int Date::getDay(){
    return d;
}
int Date::getMonth(){
    return m;
}
int Date::getYear(){
    return y;
}
void Date::setDay(int day){
    d = day;
}
void Date::setMonth(int month){
    m = month;
}
void Date::setYear(int year){
    y = year;
}

void Date::outputAmerican(){
    cout << m << ", " << d << ", " << y << endl;
}

void Date::outputEuropean(){
    cout << d << ", " << m << ", " << y << endl;
}