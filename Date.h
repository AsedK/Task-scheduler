#ifndef __DATE_H__
#define __DATE_H__

#include <iostream>
#include <string>
using namespace std;

class Date{
public:
Date();
int getyear();
int getmonth();
int getday();
void setyear(int y);
void setmonth(int m);
void setday(int d);
void printDate();
bool operator <(const Date& rhs);
bool operator >(const Date& rhs);
bool operator ==(const Date& rhs);
void operator =(const Date& rhs);

private:
int year;
int month;
int day;
};
#endif
