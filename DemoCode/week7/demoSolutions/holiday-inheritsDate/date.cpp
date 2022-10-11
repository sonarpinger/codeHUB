#include "date.h"
Date::Date(){
    day = -1;
    month = -1;
    year = -1;
}
Date::Date(int newDay, int newMonth, int newYear){
    day = newDay;
    month = newMonth;
    year = newYear;
}
Date::Date(const Date& oldDate){
    day = oldDate.getDay();
    month = oldDate.getMonth();
    year = oldDate.getYear();
}

int Date::getDay() const{
    return day;
}
void Date::setDay(const int newDay){
    day = newDay;
}
int Date::getMonth() const{
    return month;
}
void Date::setMonth(const int newMonth){
    month = newMonth;
}
int Date::getYear() const{
    return year;
}
void Date::setYear(const int newYear){
    year = newYear;

}