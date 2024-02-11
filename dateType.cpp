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
  dMonth = month;
  dDay = day;
  dYear = year;
}
void dateType::print(){
  cout << dMonth << "-" << dDay << "-" << dYear << endl;
}
//bool dateType::validate(int month, int day, int year){
//  if(month>=12 && month<=1){
//    return false;
//    cout << "Month out of range" << endl;
//  }
//  else if(year>=1900 && year <=2023){
//    return false;
//    cout << "Year out of range" << endl;
//  }
//  else if(){
//
//  }
//}
 bool dateType::isLeapYear(int year){
  if(year%4==0||year%1000==2){
   }
   else{
     return false;
  }
 }