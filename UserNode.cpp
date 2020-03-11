/*
Project 2 
UserNode.cpp
*/

#include "UserNode.h"

UserNode::UserNode()
{
    FirstName = "";
    LastName = "";
    Handle = "";
    Number = "";
    Count = 0;
    Next = NULL;
}

UserNode::UserNode(string firstname, string lastname, string handle, string number, int count)
{
    FirstName = firstname;
    LastName = lastname;
    Handle = handle;
    Number = number;
    Count = count;
}

UserNode::~UserNode()
{
    
}
    
//Get Methods
string UserNode::getFirstName()
{
    return FirstName;
}

string UserNode::getLastName()
{
    return LastName;
}

string UserNode::getHandle()
{
    return Handle;
}

string UserNode::getNumber()
{
    return Number;
}

int UserNode::getCount()
{
    return Count;
}

UserNode * UserNode::getNext()
{
    return Next;
}
    
//Set Methods
void UserNode::setFirstName(string firstname)
{
    FirstName = firstname;
}

void UserNode::setLastName(string lastname)
{
    LastName = lastname;
}

void UserNode::setHandle(string handle)
{
    Handle = handle;
}

void UserNode::setNumber(string number)
{
    Number = number;
}

void UserNode::setCount(int count)
{
    Count = count;
}

void UserNode::setNext(UserNode *next)
{
    Next = next;
}

//Print Method
void UserNode::UserPrint() const
{
    cout << "First name: " << FirstName << endl << "Last name: " << LastName << endl
         << "User handle: " << Handle << endl << "Phone number: " << Number << endl
         << "Message count: " << Count << endl;
}



