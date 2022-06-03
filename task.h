#ifndef __TASK_H__
#define __TASK_H__

#include <iostream>
#include <string>

using namespace std;

class Task {
    string title;
    string details;
    string description;
    int date;
    bool done;
    int priority;
    Task* next;

    public:
    Task();
    
    Task(string t, string dt, string des,int d, bool p){title = t; details = dt; description = des; date = d; done = false; priority = p;}
    void printTask(std::ostream& out);
    virtual void  printsubTask() = 0;

    string getTitle();
    string getDetails();
    string getDescription();
    void setDescription(string str);
    void setTitle(string str);
    void setDetails(string str);
    int getDate();
    bool isDone();
    bool  getPriority();
    void setPriority();
};

class subTask:public Task{
public:
subTask();
string getsubstudy();
void setsubstudy(string slist1);
virtual void printsubTask();
private:
string study;
};

class subTask2:public Task{
public:
subTask2();
string getsubbusiness();
void setsubbusiness(string slist2);
virtual void printsubTask();
private:
string business;
};

class subTask3:public Task{
public:
subTask3();
string getsubappointment();
void setsubappointment(string slist3);
virtual void printsubTask();
private:
string appointment;
};

#endif
