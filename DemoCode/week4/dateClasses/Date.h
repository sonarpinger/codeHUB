#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date{
    int s, m ,h;
    bool ampm;

    public:
        Date();
        Date(const Date&);
        Date(int, int, int, bool);

        void setHours(int hours);
        void setMinutes(int minutes);
        void setSeconds(int seconds);
        void setAmPm(bool am);

        int getMinutes();
        int getSeconds();
        int getHours();
        bool getAmPm();
        //outputAmerican
        //outputEuropean
};

#endif