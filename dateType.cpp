#include <iostream>
#include "dateType.h"

using namespace std;

dateType::dateType(){
  dMonth = 1;
  dDay = 1;
  dYear = 1900;
}
int dateType::getDay(){
  return dDay;
}
int dateType::getMonth(){
  return dMonth;
}
int dateType::getYear(){
  return dYear;
}
void dateType::setDate(int month, int day, int year){
    if (dateType::isLeapYear(year) && (year >= 1900 || year <= 2024)) {
        switch (month) {
        case 1:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                break;
            }
            break;
        case 2:
            if (day <= 29) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                break;
            }
            break;

        case 3:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                break;
            }
            break;
        case 4:
            if (day <= 30) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                break;
            }
            break;
        case 5:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                break;
            }
            break;
        }
    }
}
void dateType::print(){
  cout << dMonth << "-" << dDay << "-" << dYear << endl;
}
bool dateType::isLeapYear(int year){
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
       return true;
  }
  else {
       return false;
  }
}