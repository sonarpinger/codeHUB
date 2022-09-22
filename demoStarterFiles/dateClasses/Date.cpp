#include "Date.h"

#include <iostream>

// Date::Date(int a, int b, int c){
//     m = a;
//     d = b;
//     y = c;
// }

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