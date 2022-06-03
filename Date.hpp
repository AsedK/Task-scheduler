#ifndef __DATE_HPP__
#define __DATE_HPP__

#include <iostream>
#include <string>
using namespace std;

class Date{
public:
Date(){
    year = 0;
    month = 0;
    day = 0;
}
int getyear(){
    return year;
}
int getmonth(){
    return month;
}
int getday(){
    return day;
}
void setyear(int y){
    year = y;
}
void setmonth(int m){
    month = m;
}
void setday(int d){
    day = d;
}
void printDate(ostream& out){
    out <<"Date: " << getmonth() << "/" << getday() << "/" << getyear() << endl; 
}
bool operator <(const Date& rhs){
    if(year < rhs.year){
        return true;
    }
    if(year == rhs.year && month < rhs.month){
        return true;
    }
    if(year == rhs.year && month == rhs.month && day < rhs.day){
        return true;
    }
    return false;
}
bool operator >(const Date& rhs){
    if(year > rhs.year){
        return true;
    }
    if(year == rhs.year && month > rhs.month){
        return true;
    }
    if(year == rhs.year && month == rhs.month && day > rhs.day){
        return true;
    }
    return false;
}
bool operator =(const Date& rhs){
    if(year == rhs.year && month == rhs.month && day == rhs.day){
        return true;
    }
    return false;

}
private:
int year;
int month;
int day;
};
#endif

