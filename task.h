#ifndef __TASK_H__
#define __TASK_H__

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class Task {
    string title;
    string description;
    Date date;
    bool done;
    bool priority;

    public:
    Task();
    
    Task(string t, string des,Date d){title = t; description = des; date = d; done = false; priority = false;}
    void printTask();

    string getTitle();
    string getDescription();
    void setDescription(string str);
    void setTitle(string str);
    void setDone();
    Date getDate();
    bool isDone();
    bool getPriority();
    void setPriority();
    void operator=(Task in);
};

class study:public Task{
    public:
    study();
    string getsubstudy();
    virtual void setsubinfo();
    virtual void printsubTask();
    private:
    string cName;
};

class business:public Task{
    public:
    business();
    string getsubbusiness();
    virtual void setsubbusiness();
    virtual void printsubTask();
    private:
    string team;
};

class appointment:public Task{
    public:
    appointment();
    string getsubappointment();
    virtual void setsubappointment();
    virtual void printsubTask();
    private:
    string location;
};

#endif
