#include "Date.h"

Date::Date(){
    year = 0;
    month = 0;
    day = 0;
}

int Date::getday(){
    return day;
}

int Date::getmonth(){
    return month;
}

int Date::getyear(){
    return year;
}

void Date::setyear(int y){
    year = y;
}

void Date::setmonth(int m){
    month = m;
}

void Date::setday(int d){
    day = d;
}

void Date::printDate(){
    cout << getmonth() << "/" << getday() << "/" << getyear() << endl; 
}

bool Date::operator <(const Date& rhs){
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
bool Date::operator >(const Date& rhs){
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
bool Date::operator==(const Date& rhs){
    if(year == rhs.year && month == rhs.month && day == rhs.day){
        return true;
    }
    return false;
}

void Date::operator=(const Date& rhs){
    this->year = rhs.year;
    this->month = rhs.month;
    this->day = rhs.day;
}
