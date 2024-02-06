// dateType class definition header file
#ifndef DTYP
#define DTYP
#include <iostream>
using namespace std;
class dateType {
public:
    void setDate(int, int, int);
    int getDay();
    int getMonth();
    int getYear();
    void print();
    bool isLeapYear(int);
    dateType(int month = 1, int day = 1, int year = 1900);
private:
    int dMonth;
    int dDay;
    int dYear;
};
#endif
