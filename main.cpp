#include "tasklist.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Menu(){
    string input;
    TaskList list;
    while(input != "q"){
        cout << "MENU" << endl << endl;
        cout << "[A]dd new task" << endl;
        cout << "[R]emove task" << endl;
        cout << "[P]rint list" << endl;
        cout << "Print Task [D]escription" << endl;
        cout << "[M]ark tasks as complete/incomplete" << endl;
        cout << "Delete [C]omplete Tasks" << endl;
        cout << "Print [I]ncomplete Tasks" << endl;
        cout << "[Q]uit" << endl;
        cout << "Input: ";
        getline(cin, input);
        
      if(input == "a"){//add
            list.addtoList();

        }
        else if (input == "r"){//remove
            list.removeFromList();

        }
        else if (input == "p"){
            list.printList();
        }
        else if (input == "d"){//delete 
            list.deleteFromList();
        }
        else if (input == "c"){
            cin.clear()
            string s = " ";
            while((s != "y") || (s != "n")){
                cout << "Are you sure you want to delete all completed tasks? (y/n)" << endl;
                cin >> s;
                if((s != "y") || (s != "n")){
                    cout << "Please respond with 'y' or 'n'!" << endl;
                }
            }
            if(s == "y"){
                list.deleteCompleted();
            }
        }

    }
}

int main(){
    Menu();
    return 0;
}
