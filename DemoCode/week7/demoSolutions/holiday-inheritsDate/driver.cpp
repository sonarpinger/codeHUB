//This driver shows composition of date into holiday
//This code currently works (we worked on it end of last class)
//However, if we really think about it, a holiday IS a date, it doesn't just have a date
//So let's modify holiday so that it inherits from date

#include "date.h"
#include "holiday.h"

int main(){
    //does not work (date is default)
    Holiday christmasHoliday("Christmas", 25, 12, 2022);

    christmasHoliday.printDate();
    

    return 0;
}