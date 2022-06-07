#include "tasklist.hpp"
#include <string>
#include <vector>

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
        cout << "No tasks available." << endl;
        return;
    }
    cout << "PRIORITY TASKS" << endl << endl;
    int i = 0;
    int place = 1;
    for(i; i < list.size(); ++i){
        if(list.at(i).getPriority() == true){
            cout << place << ": ";
            list.at(i).printTask();
            cout << endl << endl;
            place++;
        }
    }

    if(place == 1){
        cout << "No priority tasks available." << endl;
    }

    place = 1;
    for(i = 0; i < list.size(); ++i){
        if(list.at(i).getPriority() == false){
            cout << place << ": ";
            list.at(i).printTask();
            cout << endl << endl;
            place++;
        }
    }

    if(place == 1){
        cout << "No normal tasks available." << endl;
    }
}

void TaskList :: printInOrder(){
    int place = 1;
    for(int i = 0; i < list.size(); ++i){
        cout << place << ": ";
        list.at(i).printTask();
        cout << endl << endl;
        place++;
    }
}

void TaskList :: printChoice(){
    int printChoice;
    while((printChoice < 1) || (printChoice > 2)){
        cout << "type 1 to print Full list, type 2 to print To-do list" << endl;
        cin >> printChoice;
        if(printChoice == 1){
        printList();
        }
        else if (printChoice == 2){
        printIncomplete();
        }
        else {
        cout << "Invalid option, please try again" << endl;
        }
    }  
}

void TaskList :: printIncomplete(){
    if(list.size() == 0){
        cout << "No tasks available." << endl;
        return;
    }
    cout << "PRIORITY TASKS" << endl << endl;
    int i = 0;
    int place = 1;
    for(i; i < list.size(); ++i){
        if((list.at(i).getPriority() == true) && (list.at(i).isDone() == false)){
            cout << place << ": ";
            list.at(i).printTask();
            cout << endl << endl;
            place++;
        }
    }

    if(place == 1){
        cout << "No priority tasks available." << endl;
    }

    place = 1;
    for(i = 0; i < list.size(); ++i){
        if((list.at(i).getPriority() == false) && (list.at(i).isDone() == false)){
            cout << place << ": ";
            list.at(i).printTask();
            cout << endl << endl;
            place++;
        }
    }

    if(place == 1){
        cout << "No normal tasks available." << endl;
    }
}

void TaskList :: deleteCompleted(){
    int erased = 0;
    cout << "Deleting all completed tasks..." << endl;
    for(unsigned i = 0; i < list.size(); ++i){
        if(list.at(i).isDone() == true){
            list.erase(list.begin() - 1 + i);
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

void TaskList::addToList(){
    string input = " ";
    while (input != "n"){
        string l1 = " ";
        string l2 = " ";
        Date dt;
        int y;
        int m;
        int d;
        bool p;
        int type = 0;
        
        while(type < 1 || type > 4){
            cout << "What kind of task is this?" << endl;
            cout << "1. Basic" << endl;
            cout << "2. Study" << endl;
            cout << "3. Business" << endl;
            cout << "4. Appointment" << endl;
            
            cin >> type;
        }
        cin.clear();
        cin.ignore();
        cout << "What is the title of the task? Input here: ";
        getline(cin, l1);
        cout << endl;
        cin.clear();
        cout << "Title: " << l1 << endl;
        cout << "Describe this task." << endl;
        getline(cin, l2);
        cout << "Description: " << l2 << endl;
        
        while(y < 2022){
            cout << "What year will this take place?" << endl;
            cin >> y;
            if(y < 2022){
                cout << "Please input a valid year number (2022-...)" << endl;
            }
            cin.clear();
        }
        while((m < 1) || (m > 12)){
            cout << endl << "Month? (number)" << endl;
            cin >> m;
            if((m < 1) || (m > 12)){
                cout << "Please input a valid month number (1-12)" << endl;
            }
            cin.clear();
        }
        while((d < 1) || (d > 31)){
            cout << endl << "Day?" << endl;
            cin >> d;
            if((d < 1) || (d > 31)){
                cout << "Please input a valid day number (1-31)" << endl;
            }
            cin.clear();
        }
        cout << endl;
        dt.setyear(y);
        dt.setmonth(m);
        dt.setday(d);
        dt.printDate();
        string in = " ";
        
        while((in != "y") && (in != "n")){
            cout << "Is this task a priority? (y/n)" << endl;
            cin >> in;
        }

        if(in == "y"){
            p = true;
        }
        else{
            p = false;
        }
        Task t;
        t.setTitle(l1);
        t.setDescription(l2);
        t.setDate(dt);
        t.setPriority(p);
        t.setType(type);
        if(type == 2){
            string c;
            cout << "What class is this task for? ";
            getline(cin,c);
            t.setInfo(c);
        }
        else if(type == 3){
            string c;
            cout << "What team is this task for? (Enter '0' if none)";
            getline(cin,c);
            t.setInfo(c);
        }
        else if(type == 4){
            string c;
            cout << "Where is this appointment located?";
            getline(cin,c);
            t.setInfo(c);
        }
        
        list.push_back(t);
        
        orderList();
        while((input != "y") && (input != "n")){
            cout << "Would you like to add another task? (y/n)" << endl;
            cin >> input;
            if ((input != "y") && (input != "n")){
                cout << "Oops! That's not a recognized input. Try again" << endl;
            }
        }
        cin.clear();
    }
}

void TaskList::removeFromList(){
    string r = " ";
    while(r != "n"){
        if(list.size() == 0){
            cout << "List is empty, nothing to remove." << endl;
            return;
        }
        int num = 0;
        printInOrder();
        while ((num > list.size()) || (num <= 0)){
            cout << endl << "Which task would you like to remove?" << endl;
            cin >> num;
            if((num <= 0) || (num > list.size())){
                cout << num << " is not within the values alotted, try again." << endl;
            }
            cin.clear();
        }
        list.erase(list.begin() + num - 1);
        cout << "Item #" << num << " deleted" << endl;
        cout << "Would you like to remove another task? (y/n)" << endl;
        cin >> r;
        if(r == "y"){
            cout << "Printing tasks..." << endl;
        }
        cin.clear();
        cin.ignore();
    }
}

void TaskList :: setCompleted(){
    string r = " ";
    string y = " ";
    while(r != "n"){
        if(list.size() == 0){
            cout << "List is empty, nothing to mark as completed." << endl;
            return;
        }
        int num = 0;
        printInOrder();
        while ((num > list.size()) || (num <= 0)){
            cout << endl << "Which task would you like to change?" << endl;
            cin >> num;
            if((num <= 0) || (num > list.size())){
                cout << num << " is not within the values alotted, try again." << endl;
            }
            cin.clear();
        }

        while((y != "y") && (y != "n")){
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
        if(r == "y"){
            cout << "Printing tasks..." << endl;
        }
        cin.clear();
    }
}

void TaskList :: printDescription(){
    string r = " ";
    while(r != "n"){
        if(list.size() == 0){
            cout << "List is empty, nothing to print." << endl;
            return;
        }
        int num = 0;
        printInOrder();
        while ((num > list.size()) || (num <= 0)){
            cout << endl << "Which task's description would you like to print?" << endl;
            cin >> num;
            if((num <= 0) || (num > list.size())){
                cout << num << " is not within the values alotted, try again." << endl;
            }
            cin.clear();
        }
        cout << "Description: " << list.at(num - 1).getDescription() << endl;
        cout << "Would you like to print another task's description? (y/n)" << endl;
        cin >> r;
        if(r == "y"){
            cout << "Printing tasks..." << endl;
        }
        cin.clear();
    }
}

void TaskList :: Menu(){
    string input;
    while(input != "q"){
        cout << "MENU" << endl << endl;
        cout << "[A]dd new task" << endl;
        cout << "[R]emove task" << endl;
        cout << "[P]rint list" << endl;
        cout << "Print Task [D]escription" << endl;
        cout << "[M]ark tasks as complete/incomplete" << endl;
        cout << "Delete [C]omplete Tasks" << endl;
        cout << "[Q]uit" << endl;
        cout << "Input: ";
        getline(cin, input);

      if(input == "a"){//add
            addToList();

        }
        else if (input == "r"){//remove
            removeFromList();
        }
        else if (input == "p"){
            printChoice();
        }
        else if (input == "d"){//delete
	    printDescription();
        }
        else if (input == "c"){
            cin.clear();
            string s = " ";
            while((s != "y") && (s != "n")){
                cout << "Are you sure you want to delete all completed tasks? (y/n)" << endl;
                cin >> s;
                if((s != "y") && (s != "n")){
                    cout << "Please respond with 'y' or 'n'!" << endl;
                }
            }
            if(s == "y"){
                deleteCompleted();
            }
        }
	else if (input == "m"){
		setCompleted();
	}
	cin.clear();
    }
} 
