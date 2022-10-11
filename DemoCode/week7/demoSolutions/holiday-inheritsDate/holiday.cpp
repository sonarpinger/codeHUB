#include "holiday.h"

Holiday::Holiday(){
    name = "DEFAULT";
}
Holiday::Holiday(string newName, int newDay, int newMonth, int newYear){

    name = newName;
    setDay( newDay);
    setMonth(newMonth);
    setYear(newYear); //must use setters due to const

}
Holiday::Holiday(const Holiday& oldHoliday){

    name = oldHoliday.getName();
    setDay(oldHoliday.getDay());
    setMonth(oldHoliday.getMonth());
    setYear(oldHoliday.getYear());

}


string Holiday::getName()const{
    return name;
    
}
void Holiday::setName(const string newName){
    name = newName;
}
void Holiday::printDate(){
    cout << name << " will be on " <<getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
