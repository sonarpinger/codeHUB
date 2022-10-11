#include "Date.h"

Date::Date(){
    m = 1;
    s = 1;
    h = 1;
    ampm = true;
}

Date::Date(int seconds, int minutes, int hours, bool am){
    s = seconds;
    m = minutes;
    h = hours;
    ampm = am;
}

Date::Date(const Date& old){
    h = old.h;
    m = old.m;
    s = old.s;
    ampm = old.ampm;
}


//setMonth method


//setDay method


//setYear method


//getMonth method

//getDay method

//getYear method

//outputAmerican method

//ooutputEuropean method