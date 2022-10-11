//This driver shows composition of date into holiday
//This code currently works (we worked on it end of last class)
//However, if we really think about it, a holiday IS a date, it doesn't just have a date
//So let's modify holiday so that it inherits from date

#include "date.h"
#include "holiday.h"

int main(){
    Date christmas(25, 12, 2022);
    Holiday christmasHoliday(1, "Christmas", christmas);

    cout << christmasHoliday.getName() << " will be on " << christmas.getMonth() << "/" << christmas.getDay() << "/" << christmas.getYear() << endl;
    return 0;
}