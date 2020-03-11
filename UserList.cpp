/*
Project 2 
UserList.cpp
*/

#include "UserList.h"


UserList::UserList()
{
    UserInfo = NULL;
    Max = NULL;
    NumberUsers = 0;
    NumberMessages = 0; 
}

UserList::~UserList()
{
    UserInfo = NULL;
}
    
void UserList::AddList(string firstname, string lastname, string handle, string number, int count)
{
    // Find last node
   UserNode *ptr = UserInfo;
   while ((ptr != NULL) && (ptr->getNext() != NULL))
      ptr = ptr->getNext();

   // Insert new node
   if (ptr != NULL)
   {
       ptr->setNext(new UserNode(firstname, lastname, handle, number, count));
       NumberUsers += 1;
   }
   else
   {
      UserInfo = new UserNode(firstname, lastname, handle, number, count);
      NumberUsers += 1;
   }
   
}

UserNode * UserList::UpdateList(string firstname, string lastname)
{
    UserNode *ptr = UserInfo;
    while(ptr != NULL)
    {
        string temp1 = ptr->getFirstName();
        string temp2 = ptr->getLastName();
        if ((temp1 == firstname) && (temp2 == lastname))
        {
            int count = ptr->getCount();
            count += 1;
            ptr->setCount(count);
            NumberMessages += 1;
            return ptr;
        }
        else 
        {
            ptr = ptr->getNext();
        }
    }
}

void UserList::FindList()
{
    UserNode *ptr = UserInfo;
    UserNode *max = Max;
    max = ptr;
    while (ptr != NULL)
    {
        int Temp1 = max->getCount();
        int Temp2 = ptr->getCount();
        if (Temp1 < Temp2)
        {
           max = ptr;
        }
        ptr = ptr->getNext();
    }
    
    cout << endl <<  "This user sent the most messages:" << endl;
    max->UserPrint();
    
}

void UserList::PrintList()
{
    UserNode *ptr = UserInfo;
    while (ptr != NULL)
    {
        ptr->UserPrint();
        ptr = ptr->getNext();
    }
    cout << endl << "Total number of users: " << NumberUsers << endl 
         << "Total number of messages: " << NumberMessages << endl;
}
