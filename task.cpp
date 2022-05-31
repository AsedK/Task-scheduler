#include "task.h"

using namespace std;

Task::Task(){
    title = "none";
    details = "none";
    desciption = "";
    done = false;
    priority = 0;
    date = 0;
    next = nullptr;
    

}



Task::printTask(){
    cout << "Task title: " << getTitle()<< endl;
    cout << "details: " << getDetails() << endl;
    cout << "Date: " << getDate() << endl;
    cout << "Desciption: " << getDesciption() << endl;
    cout << "done: " << isDone() << endl;
    cout << "priority: " <<getPriority() << endl;
}

Task::getTitle(){
    return title;
}

Task::getDetails(){
    return details;
}

Task::getDate(){
    return date;
}

Task::getDesciption(){
    return desciption;
}

void Task::setDesciption(string str){
    this->desciption = str;
}

void Task::setDetails(string str){
    this->details = str;
}

void Task::setTitle(string str){
    this->title = str;
}

Task::isDone(){
    return done;
}

Task::getPriority(){
    return priority;
}

void Task::setPriority(int num){
    this->priority = num;
}


subTask::subTask(){
    classname = " ";
}

subTask::getsubclassname(){
   return classname;
   
}

void subTask::setsubclassname(string slist1){
    classname = slist1;
}

subTask2::subTask2(){
    business = " ";
}

subTask2::getsubcbusiness(){
    return business;
}

void subTask2::setsubbusiness(string slist2){
    business = slist2;
}

subTask3::subTask3(){
    appointment = " ";
}

subTask3::getsubcappointment(){
    return appointment;
}

void subTask3::setsubappointment(string slist3){
    appointment = slist3;
}
