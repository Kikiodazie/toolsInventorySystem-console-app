#include "Inventory.h"
#include <iostream>
#include "Admin.h"
#include "ToolUser.h"
#include "Tool.h"

using namespace std;

//Method constructor
Inventory::Inventory()
{
    cout << "\n\n TOOLS INVENTORY MANAGEMENT SYSTEM FOR BELLSTECH BY NEXT-GEN GROUP \n \n"<< endl;

}

Admin admin;
// THIS WAS FUNCTION BY ADERINTO HABEEB        	2018/6859
void Inventory ::showInventoryInformation(){
//TODO
// Outline admin information and current tool user info
// Total number of tools in the inventory
// COPYRIGHT

cout << "\n\n TOOLS INVENTORY MANAGEMENT SYSTEM FOR BELLSTECH BY NEXT-GEN GROUP \n \n"<< endl;

cout << "\n\n MANAGED BY  " << admin.adminName<< endl;

cout << "ALL TOOLS!!!!!!"<< endl;

displayAllTools();



cout << "\n\n All Rights Reserved to THE NEXT-GEN GROUP 2020"<<endl;
}

//This function was written by OKUNOLA ABDULWASIU       2018/6863
void Inventory ::goToMainMenu(){

      cout<<"\n \t\t\t* * * * * * * * * * * * * * * * * *";
            cout<<"\n\t\t\t  1. Request Tools";
            cout<<"\n\t\t\t  2. Display All Tools";
            cout<<"\n\t\t\t  3. View All Public Data About This System";
            cout<<"\n\t\t\t* * * * * * * * * * * * * * * * * *";
            cout<<"\n\t\t\t Enter Your choice: ";
            cout << "   \n";

            int actionChoice;
            cin>> actionChoice;

            if(actionChoice == 1){


                    admin.registerToolUser();

            }else if(actionChoice == 2){

                displayAllTools();

            }else if(actionChoice == 3){
                showInventoryInformation();

            }

}



//This Function was written by ODAZIE DIVINE 2018/6854 the Lead Pogrammer
Tool listOfTools[3];
int arrSize = sizeof(listOfTools)/sizeof(listOfTools[0]);

void Inventory::addTools(){

     int adminPassword;
        cout << "\n\n ENTER ADMIN PASSWORD FOR ACCESS: ";

        cin >> adminPassword;

    Admin systemAdmin;

    if(adminPassword == systemAdmin.adminPassword){



     int toolId = 0;
    for (int i = 0; i < arrSize; ++i) {
       toolId++;

        listOfTools[i].toolId = toolId;

        cout << "TOOL "<< listOfTools[i].toolId << endl;
        cout << "   \n";

        cout << "Enter Tool Name: ";
        cin >> listOfTools[i].toolName;
        cout << "   \n";

        cout << "Enter Tool Type(Electrical,Mechanical,Civil): ";
        cin >> listOfTools[i].toolType;
        cout << "   \n";

        cout << "Enter Tool Description: ";
        cin >> listOfTools[i].toolDescription;
        cout << "   \n";

        listOfTools[i].addDateAndTime;

    }





    goToMainMenu();

    }else{
            cout<<"WRONG PASSWORD.......";
            cout<<"\n The SYSTEM will log you out now!!!!!!";

            goToMainMenu();

        }



}

// This function was written by LADOJA ABDULMALIK      	2018/7047

void Inventory::displayAllTools(){



    for (int i = 0; i < arrSize; ++i) {

            cout<<"\n \t* * * * * * * * * * * * * * * * * * * * * * * * * * *";
            cout<<"\n\n\t " << "TOOL ID";
            cout<<"   " << "NAME";
            cout<<"   " << "TYPE";
            cout<<"   " << "DESCRIPTION";
            cout<<"   " << "ADDDATE";
            cout<<"\n\n\t " << listOfTools[i].toolId;
            cout<<"\t" << listOfTools[i].toolName;
            cout<<"\t" << listOfTools[i].toolType;
            cout<<"\t" << listOfTools[i].toolDescription;
            cout<<"\t" << listOfTools[i].addDateAndTime;
            cout<<"\n\t* * * * * * *  * * * * * * * * *  * * *  * * * * * * *";

    }



}







