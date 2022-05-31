#include "Date.h"

Date::Date(){
    year = 0;
    month = 0;
    day = 0;
}

Date::getday(){
    return day;
}

Date::getmonth(){
    return month;
}

Date::getyear(){
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
    cout<<"Date: " << getmonth() << "/" << getday() << "/" << getyear() << endl; 
}

Date::compareDate(){

}
