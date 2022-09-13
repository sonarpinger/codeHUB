#include <iostream>
using namespace std;

struct Date{
    int day, month, year;

    void printAmerican(){
        cout << month << "/" << day << "/" << year << endl;
    }
};

int main(){
    struct Date today;
    today.day = 6;
    today.month = 6;
    today.year = 2022;

    today.printAmerican();
}