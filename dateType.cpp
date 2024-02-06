#include <iostream>
#include "dateType.h"

using namespace std;

dateType::dateType(int month, int day, int year){
  dMonth = month;
  dDay = day;
  dYear = year;
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
    // conditional that states in english :: if it is a leap year and the year is in bounds, and the days fit into the months selected
    // and the month is within the bounds -> set month, day and year.
    // if any of this is untrue inform user and set to defaul (break)
    // same conditional used with the only difference being that the year is not a leap year, and changes days allowed in february
    if (dateType::isLeapYear(year) && (year >= 1900 && year <= 2024) && (month >= 1 && month <= 12)) {
        switch (month) {
        case 0:
            cout << "Invalid date, resetting to default date.\n";
            dMonth = 1;
            dDay = 1;
            dYear = 1900;
            break;
        case 1:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
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
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
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
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
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
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
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
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 6:
            if (day <= 30) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 7:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 8:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 9:
            if (day <= 30) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 10:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 11:
            if (day <= 30) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 12:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            cout << "Invalid date, resetting to default date.\n";
            dMonth = 1;
            dDay = 1;
            dYear = 1900;
            break;
        }
    }
    else if (!dateType::isLeapYear(year) && (year >= 1900 && year <= 2024) && (month >=1&& month <=12) ) {
        switch (month) {
        case 1:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 2:
            if (day <= 28) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
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
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
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
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
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
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 6:
            if (day <= 30) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 7:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 8:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 9:
            if (day <= 30) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 10:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 11:
            if (day <= 30) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        case 12:
            if (day <= 31) {
                dMonth = month;
                dDay = day;
                dYear = year;
            }
            else {
                cout << "Invalid date, resetting to default date.\n";
                dMonth = 1;
                dDay = 1;
                dYear = 1900;
                break;
            }
            break;
        }
    }
    else {
        cout << "Invalid date, resetting to default date.\n";
        dMonth = 1;
        dDay = 1;
        dYear = 1900;
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