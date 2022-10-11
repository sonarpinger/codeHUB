#ifndef DATE_H
#define DATE_H

class Date{
    protected:
        int day, month, year;

    public:
        Date();
        Date(int, int, int);
        Date(const Date&);

        int getDay() const;
        void setDay(const int);
        int getMonth() const;
        void setMonth(const int);
        int getYear() const;
        void setYear(const int);
};
#endif