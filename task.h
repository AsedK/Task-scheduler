#ifndef __TASK_H__
#define __TASK_H__

#include <iostream>
#include <string>

using namespace std;

class Task {
    string title;
    string details;
    string desciption;
    int date;
    bool done;
    int priority;
    Task* next;

    public:
    Task();
    Task(string t, string dt, string des,int d, bool p){title = t; details = dt; desiption = des; date = d; done = false; priority = p;}
    printTask();
    string getTitle();
    string getDetails();
    string getDesciption();
    void setDesciption(string str);
    void setTitle(string str);
    void setDetails(string str);
    int getDate();
    bool isDone();
    int getPriority();
    void setPriority();
    void largestpriority(array arr);
};

class subTask:public Task{
public:
subTask();
string getsubclassname();
void setsubclassname();
private:
string classname;
};

class subTask2:public Task{
public:
subTask2();
string getsubcbusiness();
void setsubbusiness();
private:
string business;
};

class subTask3:public Task{
public:
subTask3();
string getsubcappointment();
void setsubappointment();
private:
string appointment;
};
