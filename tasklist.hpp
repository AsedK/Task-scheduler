#ifndef __TASKLIST_H__
#define __TASKLIST_H__

#include <iostream>
#include "task.h"
#include <vector>

class TaskList{
    vector <Task> list;
    void orderList();

    public:
    void Menu();
    void printChoice();
    void printList();
    void addToList();
    void removeFromList();
    void deleteCompleted();
    void setCompleted();
    void printInOrder();
    void printIncomplete();
    void printDescription();
};

#endif



