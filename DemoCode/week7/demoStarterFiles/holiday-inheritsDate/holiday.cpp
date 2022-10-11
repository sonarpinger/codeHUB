#include "holiday.h"

Holiday::Holiday(){
    numDays = 0;
    name = "DEFAULT";
}
Holiday::Holiday(int newNum, string newName, Date newDate){
    numDays = newNum;
    name = newName;
    holidayDate = newDate;
}
Holiday::Holiday(const Holiday& oldHoliday){
    numDays = oldHoliday.getNumDays();
    name = oldHoliday.getName();
    holidayDate = oldHoliday.holidayDate;
}

int Holiday::getNumDays()const {
    return numDays;
}
void Holiday::setNumDays(const int newNumDays){
    numDays = newNumDays;
}
string Holiday::getName()const{
    return name;
}
void Holiday::setName(const string newName){
    name = newName;
}
void Holiday::addDate(const Date newDate){
    holidayDate = newDate;
}
Date Holiday::getDates() {
    return holidayDate;
}