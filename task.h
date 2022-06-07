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
    int type;
    string info;

    public:
    Task();
    
    Task(string t, string des,Date d, string i){title = t; description = des; date = d; done = false; priority = false; type = 1; info = i;}
    void printTask();

    string getTitle();
    string getDescription();
    void setDescription(string str);
    void setTitle(string str);
    void setDone(bool d);
    void setInfo(string i);
    void setDate(Date d);
    Date getDate();
    bool isDone();
    bool getPriority();
    void setPriority(bool b);
    void setType(int t);
    void operator=(Task in);
};

#endif
