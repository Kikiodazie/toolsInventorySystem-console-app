#include "Admin.h"
#include <iostream>
#include "ToolUser.h"
#include "Inventory.h"



using namespace std;

Admin::Admin()
{


}


//This Function was written by ODAZIE DIVINE 2018/6854 the Lead Pogrammer
void Admin ::registerToolUser(){

    Inventory toolInventory;


    ToolUser listOfUser[5];

    ToolUser currentToolUser;

    currentToolUser.UserId += 1;
    cout << "UserId: "<< currentToolUser.UserId << endl;

    cout << "   \n";

    cout << "Enter Name: ";
    cin >> currentToolUser.name;
    cout << "   \n";

    cout << "Enter Level: ";
    cin >> currentToolUser.level;

    cout << "   \n";

     cout << "Enter Department: ";
    cin >> currentToolUser.department;

    cout << "   \n";


    listOfUser[1] = currentToolUser;

    cout <<"Hey " << currentToolUser.name << " You have successfully registered\n"<<endl;

            cout<<"\n \t\t\t* * * * * * * * * * * * * * * * * *";
            cout<<"\n\t\t\t  1. Request a Tool";
            cout<<"\n\t\t\t  2. Main Menu";
            cout<<"\n\t\t\t* * * * * * * * * * * * * * * * * *";
            cout<<"\n\t\t\t Enter Your choice: ";

            int actionChoice;
            cin>> actionChoice;

            if(actionChoice == 1){

                cout << "See all available tools below\n\n\n";

                if (toolInventory.listOfTools[1].toolId == 0){

                    cout<< "No tool has been added yet!!!!"<<endl;

                    toolInventory.addTools();
                }else{

                }

                toolInventory.displayAllTools();

                cout << "Select a tool by Id: ";
                int toolId;

                cin >> toolId;

                for(int i = 0; i < 3; ++i){

                    if(toolInventory.listOfTools[i].toolId == toolId){

                        cout<< "Your request was SUCCESSFUL"<<endl;

                        cout<< "Tool Name "<< toolInventory.listOfTools[i].toolName << " With id " << toolId<< " will be issued to you."<<endl;

                    }else{
                        cout << "Wrong toolId"<< endl;
                        toolInventory.goToMainMenu();
                    }
                }



            }else{
                toolInventory.goToMainMenu();
            }



}
