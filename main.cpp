#include <iostream>
#include <cstdlib>
#include <string>
#include "Inventory.h"
#include "Admin.h"
#include "Tool.h"
#include "ToolUser.h"


using namespace std;



//THE CLASSES AND FUNCTIONS WHERE WRITTEN IN SEPARATELY BY DIFFERENT MEMBERS OF THE NEXT-GEN GROUP.
//These classes where put together to function as on program by the lead programmer ODAZIE DIVINE 2018/6854 inline of basic OOP concepts.



int main()
{
    Inventory toolInventory;
    Admin systemAdmin;
    ToolUser student;

    cout<<"\n \t====================================================================\n";
	cout<<"\n\t\WELLCOME TO The BELLS UNIVERSITY OF TECHNOLOGY TOOLS INVENTORY SYSTEM  \n";
	cout<<"\n \t\====================================================================\n\n";

	cout<<"\n \t* * * * * * * * * * * * * * * * * *";
	cout<<"\n\t\  1. Admin(Technologist in Charge of the system)";
	cout<<"\n\t\  2. Tool User(Student)";
	cout<<"\n\t\  3. Exit";
	cout<<"\n\t* * * * * * * * * * * * * * * * * *";
	cout<<"\n\t\ Enter Your choice: ";

	int userChoice;

	cin >> userChoice;

	if(userChoice == 1){

        int adminPassword;
        cout << "\n\n ENTER ADMIN PASSWORD: ";

        cin >> adminPassword;

        if(adminPassword == systemAdmin.adminPassword){
            cout<<"\n \t\t\t* * * * * * * * * * * * * * * * * *";
            cout<<"\n\t\t\t  1. Add New Tool";
            cout<<"\n\t\t\t  2. Display All Tools";
            cout<<"\n\t\t\t  4. Log Out";
            cout<<"\n\t\t\t* * * * * * * * * * * * * * * * * *";
            cout<<"\n\t\t\t Enter Your choice: ";


            int actionChoice;
            cin>> actionChoice;

            if(actionChoice == 1){


                cout<<"Add 3 tools at a time\n";
                //Why a constant value?
                // We encountered lots of bugs(errors) while trying serve the array of Tool objects
                // to two functions displayAllTools() and addTools() after manipulation in the addTools function.
                // After hours of trying out solutions with vectors, pointers and other i CHOOSE A CONSTANT VALUE;


                cout << "   \n\n";

                toolInventory.addTools();
            }else if (actionChoice == 2){

                cout << "Wait.........  \n";
                cout << "Wait.........  \n";
                cout << "Wait.........  \n";


                cout << "There is currently no tool in your inventory!!!!!"<<endl;

                toolInventory.addTools();
                toolInventory.goToMainMenu();

            }else{
                cout<<"\n The SYSTEM will log you out now!!!!!!";

                return 0;


            }


        }else{
            cout<<"WRONG PASSWORD.......";
            cout<<"\n The SYSTEM will log you out now!!!!!!";

            return 0;

        }

	}else if(userChoice == 2){
	    cout<<"\n \t\t\t* * * * * * * * * * * * * * * * * *";
        cout<<"\n\t\t\t  1. Register to Request a tool";
        cout<<"\n\t\t\t  2. Return a Tool";
        cout<<"\n\t\t\t  3. Log Out";
        cout<<"\n\t\t\t* * * * * * * * * * * * * * * * * *";
        cout<<"\n\t\t\t Enter Your choice: ";


        int actionChoice;
        cin>> actionChoice;

        if(actionChoice == 1){

            cout << "The technologist will register you into the system database\n"<<endl;
            cout << "Wait.........  \n";
            cout << "Wait.........  \n";
            cout << "Wait.........  \n";

            systemAdmin.registerToolUser();

            cout << "No tool has been added yet......\n\n you can ADD a tool if you have the clearance!!"<<endl;

            //toolInventory.addTools();

            toolInventory.showInventoryInformation();


        }else if (actionChoice == 2){
            student.returnTool();

        }else{

            return 0;
        }


	}else{

	    return 0;
	}



    return 0;
}
