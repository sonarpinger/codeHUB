#include "holiday.h"

Holiday::Holiday(){
    numDays = 0; 
    name = "DEFAULT";
}
Holiday::Holiday(int newNum, string newName, Date newDates[]){
    numDays = newNum;
    name = newName;
    for(int i = 0; i < numDays; i++){
        dates[i] = newDates[i];
    }
}
Holiday::Holiday(const Holiday& oldHoliday){
    numDays = oldHoliday.getNumDays();
    name = oldHoliday.getName();
    for(int i = 0; i < numDays; i++){
        dates[i] = oldHoliday.dates[i];
    }
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
    dates[numDays] = newDate;
    numDays++;
}
Date* Holiday::getDates() {
    return dates;
}