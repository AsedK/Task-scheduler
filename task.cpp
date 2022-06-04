#include "task.h"

using namespace std;

Task::Task(){
    title = "none";
    details = "none";
    description = "";
    done = false;
    priority = false;
    date;
}

Task::printTask(){
    cout << "Task title: " << getTitle()<< endl;
    cout << "details: " << getDetails() << endl;
    cout << "Date: " << getDate() << endl;
    cout << "Description: " << getDescription() << endl;
    cout << "done: " << isDone() << endl;
    cout << "priority: " <<getPriority() << endl;
}

Task::getTitle(){
    return title;
}

Task::getDate(){
    return date;
}

Task::getDescription(){
    return description;
}

void Task::setDesciption(string str){
    this->description = str;
}

void Task::setTitle(string str){
    this->title = str;
}

void Task::setDone(bool d){
    done = d;
}

bool Task::isDone(){
    return done;
}

bool Task::getPriority(){
    return priority;
}

void Task::setPriority(bool b){
    this->priority = b;
}


study::study(){
    study = " ";
}

string study::getsubstudy(){
   return cName;
}

void study::setsubinfo(string s){
    study = s;
}
virtual study::printsubTask(){
    cout << "Class name: " << getsubstudy << endl;
}
business::business(){
    team = " ";
}

string business::getsubbusiness(){
    return team;
}

void business::setsubinfo(string t){
    team = t;
}

virtual void business::printsubTask(){
    cout << "Team name/number: " << getsubbusiness() << endl;
}
appointment::appointment(){
    location = " ";
}

string appointment::getsubappointment(){
    return location;
}

void appointment::setsubinfo(string l){
    location = l;
}

virtual void appointment::printsubTask(){
    cout << "Go to " << getsubappointment() << " for appointment" << endl;
}

void Task::operator =(const Task in){
    title = in.title;
    details = in.details;
    date = in.date;
    done = in.done;
    priority = priority.in;
}

void appointment::operator = (const appointment in){
    title = in.title;
    details = in.details;
    date = in.date;
    done = in.done;
    priority = priority.in;
    location = location.in
}

void business::operator = (const business in){
    title = in.title;
    details = in.details;
    date = in.date;
    done = in.done;
    priority = priority.in;
    team = team.in
}

void study::operator = (const study in){
    title = in.title;
    details = in.details;
    date = in.date;
    done = in.done;
    priority = priority.in;
    cName = cName.in;
}