#include "task.h"

using namespace std;

Task::Task(){
    title = " ";
    description = " ";
    done = false;
    priority = false;
    info = " ";
    type = 0;
}
void Task::printTask(){
    cout << "Task title: " << getTitle()<< endl;
    cout << "Description: " << getDescription() << endl;
    cout << "Date: ";
    this->date.printDate();
    cout << endl;
    if(type == 2){
        cout << "Appointment location: " << info << endl;
    }
    if(type == 3){
        cout << "Class name: " << info << endl;
    }
    if(type == 4){
        cout << "Team number/name: " << info << endl;
    }
    cout << "done: ";
    if(done == false){
        cout << "no";
    }
    else if(done == true){
        cout << "yes";
    }
    cout << endl;
    cout << "priority: ";
    if(priority == true){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    cout << endl;
}

void Task::setDate(Date d){
    date = d;
}

string Task::getTitle(){
    return title;
}

Date Task::getDate(){
    return date;
}

string Task::getDescription(){
    return description;
}

void Task::setInfo(string i){
    info = i;
}

void Task::setDescription(string str){
    this->description = str;
}

void Task::setType(int t){
    type = t;
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
    priority = b;
}

void Task::operator =(const Task in){
    title = in.title;
    description = in.description;
    date = in.date;
    done = in.done;
    priority = in.priority;
    type = in.type;
}