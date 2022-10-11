#include "Date.h"
//Include header file

int main(){
    //instantiate object
    Date today;

    //set month day year
    today.setDay(3);
    today.setMonth(5);
    today.setYear(2030);

    //output in two formats
    today.outputAmerican();
    today.outputEuropean();

    Date yesterday = today;
    yesterday.setYear(1011);
    yesterday.outputAmerican();
    return 0;
}