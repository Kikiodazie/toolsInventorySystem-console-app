#include <iostream>
#include "ToolUser.h"
#include "Tool.h"
#include "Inventory.h"


using namespace std;

ToolUser::ToolUser()
{
    //ctor
}

//This class was written by UKWADINAMOR VERONICA	2018/7086  assisted by the LEAD PROGRAMMER
void ToolUser::returnTool(){
    Tool toolToBeReturned;

    cout << "Enter your name: ";
    cin >> name;

    cout<<"\n \t\t\t* * * * * * *WELCOME "<< name <<" * * * * * * * * * * *\n\n";
    cout<<"Enter tools Details....."<<endl;

    cout << "Enter Tool name: ";
    cin >> toolToBeReturned.toolName;

    cout << "   \n";

    cout << "Enter Tool Type: ";
    cin >> toolToBeReturned.toolType;

    cout << "   \n";
    cout << "Wait.........  \n";
    cout << "Wait.........  \n";
    cout << "Wait.........  \n";


    cout << name <<" YOU'VE SUCCESSFULLY RETURNED   "<< toolToBeReturned.toolName<< endl;


    cout << "Have a Great Day!!!!!!!!!!!!!!!!";


    Inventory inventory;

    inventory.goToMainMenu();

}
