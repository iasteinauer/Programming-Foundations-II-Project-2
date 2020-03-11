/*
Project 2 

UserNode.h
*/

#include <iostream>
using namespace std;


class UserNode
{
 public:

    UserNode();
    UserNode(string firstname, string lastname, string handle, string number, int count);
    ~UserNode();
    
    //Get Methods
    string getFirstName();
    string getLastName();
    string getHandle();
    string getNumber();
    int getCount();
    UserNode * getNext();
    
    //Set Methods
    void setFirstName(string firstname);
    void setLastName(string lastname);
    void setHandle(string handle);
    void setNumber(string number);
    void setCount(int count);
    void setNext(UserNode * next);
    
    
    //Print Method
    void UserPrint() const;
    
 private:

    string FirstName;
    string LastName;
    string Handle;
    string Number;
    int Count;
    UserNode * Next;
    
};

