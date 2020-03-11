/*
Project 2 
Author: Isabella Steinauer
*/

#include "UserList.h"

int main()
{
    UserList n;
    int choice;
    
    do
    {
        cout << "Welcome to the message board." << endl;
        cout << "What would you like to do?" << endl;
        cout << "1) Add user information to the list." << endl;
        cout << "2) Update the message count for a user." << endl;
        cout << "3) Find the user with the most messages." << endl;
        cout << "4) Print all list information." << endl;
        cout << "5) End program." << endl;
        cin >> choice;
    
        if (choice == 1)
        {
            //initialize variables
            string first;
            string last;
            string handle;
            string num;
            int messages;
        
            //take user input
            cout << "Enter user first name: ";
            cin >> first;
            cout << "Enter user last name: ";
            cin >> last;
            cout << "Enter user handle: ";
            cin >> handle;
            cout << "Enter user phone number: ";
            cin >> num;
            cout << "Enter users messages sent: ";
            cin >> messages;
        
            //add info to list
            n.AddList(first, last, handle, num, messages);
            cout << endl;
        }
    
        else if (choice == 2)
        {
            //initialize variables
            string first;
            string last;
            
            //take user input
            cout << "Enter user first name: ";
            cin >> first;
            cout << "Enter user last name: ";
            cin >> last;
            
            //update list
            n.UpdateList(first, last);
            cout << endl;
        }   
    
        else if (choice == 3)
        {
            //find user with most messages from list
            n.FindList();
            cout << endl;
        }
    
        else if (choice == 4)
        {
            //print whole user list
            n.PrintList();
            cout << endl; 
        }
    
    }while (choice != 5);
    
    
}
