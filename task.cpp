#include "task.h"
#include<string>

using namespace std;

Task::Task(){
    title = "none";
    details = "none";
    description = "";
    done = false;
    priority = false;
    date = 0;
    next = nullptr;
    
}


void Task::printTask(std::ostream& out){
    out << "Task title: " << getTitle()<< endl;
    out << "details: " << getDetails() << endl;
    out << "Date: " << getDate() << endl;
    out << "Description: " << getDescription() << endl;
    out << "done: " << isDone() << endl;
    out << "priority: " <<getPriority() << endl;
}

string Task::getTitle(){
    return title;
}

string Task::getDetails(){
    return details;
}

int Task::getDate(){
    return date;
}

string  Task::getDescription(){
    return description;
}

void Task::setDescription(string str){
    this->description = str;
}

void  Task::setDetails(string str){
    this->details = str;
}

void Task::setTitle(string str){
    this->title = str;
}

bool Task::isDone(){
    return done;
}

bool Task::getPriority(){
    return priority;
}

void  Task::setPriority(){
    this->priority = true;
}


subTask::subTask(){
    study = " ";
}

string subTask::getsubstudy(){
   return study;
   
}

void subTask::setsubstudy(string slist1){
    study = slist1;
}
void subTask::printsubTask(){
    cout << getsubstudy() <<" for study" << endl;
}
subTask2::subTask2(){
    business = " ";
}

string subTask2::getsubbusiness(){
    return business;
}

void subTask2::setsubbusiness(string slist2){
    business = slist2;
}

void  subTask2::printsubTask(){
    cout << getsubbusiness() <<" for business" << endl;
}
subTask3::subTask3(){
    appointment = " ";
}

string subTask3::getsubappointment(){
    return appointment;
}

void subTask3::setsubappointment(string slist3){
    appointment = slist3;
}


void  subTask3::printsubTask(){
    cout << getsubappointment() <<" for appointment" << endl;
}
