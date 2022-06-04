#include "tasklist.hpp"
#include <string>
#include <vector>

TaskList::TaskList(){
}

void TaskList :: orderList(){
    for(int i = 0; i < list.size() - 1; ++i){
        for(int j = i + 1; j < list.size(); ++j){
            if(list.at(i).getDate() < list.at(j).getDate()){
                Task temp = list.at(i);
                list.at(i) = list.at(j);
                list.at(j) = temp;
                i = 0;
                j = 1;
            }
        }
    }
}

void TaskList :: printList(){
    if(list.size() == 0){
        cout << "No tasks available.";
        return;
    }
    cout << "PRIORITY TASKS" << endl << endl;
    int i = 0
    int place = 1;
    for(i; i < list.size(); ++i){
        if(list.at(i).isPriority() == true){
            cout << place << ": ";
            list.at(i).printTask();
            cout << endl << endl;
            place++;
        }
    }

    if(place == 1){
        cout << "No priority tasks available."
    }

    int place = 1;
    for(i = 0; i < list.size(); ++i){
        if(list.at(i).isPriority() == false){
            cout << place << ": ";
            list.at(i).printTask();
            cout << endl << endl;
            place++;
        }
    }

    if(place == 1){
        cout << "No normal tasks available."
    }
}

void TaskList :: printInOrder(){
    for(i = 0; i < list.size(); ++i){
        cout << place << ": ";
        list.at(i).printTask();
        cout << endl << endl;
        place++;
    }
}

void TaskList :: printTask(){
  cout << "type 1 to print Full list, type 2 to print To-do list" << endl;
  cin >> printChoice;
  if(printChoice = 1){
    printList();
  }
  else if (printChoice = 2){
    printIncomplete();
  }
  else {
    cout << "Invalid option choice, please try again"
  }
}

void TaskList :: printIncomplete(){
    if(list.size() == 0){
        cout << "No tasks available.";
        return;
    }
    cout << "PRIORITY TASKS" << endl << endl;
    int i = 0
    int place = 1;
    for(i; i < list.size(); ++i){
        if((list.at(i).isPriority() == true) && (list.at(i).isDone() == false)){
            cout << place << ": ";
            list.at(i).printTask();
            cout << endl << endl;
            place++;
        }
    }

    if(place == 1){
        cout << "No priority tasks available."
    }

    int place = 1;
    for(i = 0; i < list.size(); ++i){
        if((list.at(i).isPriority() == false) && (list.at(i).isDone() == false)){
            cout << place << ": ";
            list.at(i).printTask();
            cout << endl << endl;
            place++;
        }
    }

    if(place == 1){
        cout << "No normal tasks available."
    }
}

void TaskList :: deleteCompleted(){
    int erased = 0;
    cout << "Deleting all completed tasks..."
    for(int i = 0; i < list.size(); ++i){
        if(list.at(i).isDone() == true){
            list.erase(i);
            ++erased;
        }
    }
    if(erased == 0){
        cout << "No completed tasks" << endl;
    }
    else{
        cout << "Deleted " << erased << " tasks" << endl;
    }
}

void TaskList :: addtoList(){
    string input == " ";
    while (input != "n"){
        string l1 = " ";
        string l2 = " ";
        Date d;
        int y;
        int m;
        int d;
        bool p;
        int type = 0;
        
        while(type < 1 || type > 4){
            cout << "What kind of task is this?" << endl;
            cout << "1. Study" << endl;
            cout << "2. Business" << endl;
            cout << "3. Appointment" << endl;
            cout << "4. None of the above" << endl;

        }
        cout << "What is the title of the task? Input here: ";
        getline(cin, line);
        cout << "Title: " << l1 << endl;
        cout << "Describe this task." << endl;
        getline(cin, l2);
        cout << "Description: " << l2 << endl;
        cout << "What year will this take place?" << endl;
        cin >> y;
        cout << endl << "Month? (number)" << endl;
        cin >> m;
        cout << endl << "Day?" << endl;
        cin >> d;
        cout << endl;
        d.setyear(y);
        d.setmonth(m);
        d.setday(d);
        d.printDate();
        string in = " ";
        
        while((in != "y") || (in != "n")){
            cout << "Is this task a priority? (y/n)" << endl;
            string in;
            cin >> in;
        }

        if(in == y){
            p = true;
        }
        else{
            p = false;
        }

        if(type == 1){
            string c;
            cout << "What class is this task for? ";
            getline(cin, c);
            study t;
            t.setTitle(l1);
            t.setDescription(l2);
            t.setDate(d);
            t.setPriority(p);
            t.setsubinfo(c);
            list.push_back(t);
        }
        else if(type == 2){
            string c;
            cout << "What team is this task for? (Enter '0' if none)";
            getline(cin, c);
            business t;
            t.setTitle(l1);
            t.setDescription(l2);
            t.setDate(d);
            t.setPriority(p);
            t.setsubinfo(c);
            list.push_back(t);
        }
        else if(type == 3){
            string c;
            cout << "Where is this appointment located?";
            getline(cin, c);
            appointment t;
            t.setTitle(l1);
            t.setDescription(l2);
            t.setDate(d);
            t.setPriority(p);
            t.setsubinfo(c);
            list.push_back(t);
        }
        else if(type == 4){
            Task t;
            t.setTitle(l1);
            t.setDescription(l2);
            t.setDate(d);
            t.setPriority(p);
            list.push_back(t);
        }
        orderList();
        while((input != "y") || (input != "n")){
            cout << "Would you like to add another task? (y/n)" << endl;
            cin >> input;
            if ((input != "y") || (input != "n")){
                cout << "Oops! That's not a recognized input. Try again"
            }
        }
        cin.clear();
    }
}

void TaskList :: removeFromList(){
    string r = " ";
    while(r != "n"){
        if(list.size() == 0){
            cout << "List is empty, nothing to remove."
            return;
        }
        int num = 0;
        printInOrder();
        while ((num >= list.size()) || (num <= 0)){
            cout << endl << "Which task would you like to remove?" << endl;
            cin >> num;
            if((num <= 0) || (num >= list.size())){
                cout << num << " is not within the values alotted, try again." << endl;
            }
            cin.clear();
        }
        list.erase(num - 1);
        cout << "Item #" << num << " deleted" << endl;
        cout << "Would you like to remove another task? (y/n)" << endl;
        cin >> r;
        if(r == y){
            cout << "Printing tasks..." << endl;
        }
        cin.clear();
    }
}

void TaskList :: setComplete(){
    string r = " ";
    string y = " ";
    while(r != "n"){
        if(list.size() == 0){
            cout << "List is empty, nothing to mark as completed."
            return;
        }
        int num = 0;
        printInOrder();
        while ((num >= list.size()) || (num <= 0)){
            cout << endl << "Which task would you like to change?" << endl;
            cin >> num;
            if((num <= 0) || (num >= list.size())){
                cout << num << " is not within the values alotted, try again." << endl;
            }
            cin.clear();
        }
        
        
        

        while((y != "y") || (y != "n"));{
            cin.clear();
            cout << "This task is currently marked as ";
            if(list.at(num - 1).isDone() == true){
                cout <<  "complete" << endl;
            }
            else{
                cout << "incomplete" << endl;
            }

            cout << "Would you like to mark it as ";
            if(list.at(num - 1).isDone() == true){
                cout << "incomplete? (y/n)" << endl;
            }
            else{
                cout << "complete? (y/n)" << endl;
            }
            cin >> y;
        }

        if(y == "y"){
            if(list.at(num - 1).isDone() == true){
                list.at(num - 1).setDone(false);
            }
            else{
                list.at(num - 1).setDone(true);
            }
        }
        
        cout << "Item #" << num << " marked as ";
        if(list.at(num - 1).isDone() == true){
            cout << "complete" << endl;
        }
        else{
            cout << "incomplete" << endl;
        }

        cout << "Would you like to mark another task as complete/incomplete? (y/n)" << endl;
        cin >> r;
        if(r == y){
            cout << "Printing tasks..." << endl;
        }
        cin.clear();
    }
} 