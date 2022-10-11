#ifndef DATE_H

#define DATE_H

using namespace std;

class Date{
    int m, d, y;

    public:
        Date();
        Date(int, int, int);
        Date(const Date&);

        int getDay();
        int getMonth();
        int getYear();
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        void outputAmerican();
        void outputEuropean();
};

#endif