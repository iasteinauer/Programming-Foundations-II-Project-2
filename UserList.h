/*
Project 2 
UserList.h
*/

#include "UserNode.h"

#include <iostream>
using namespace std;

class UserList
{
public:

    UserList();
    ~UserList();
    
    void AddList(string firstname, string lastname, string handle, string number, int count);
    UserNode * UpdateList(string firstname, string lastname);
    void FindList();
    void PrintList();
    
private:
    UserNode * UserInfo;
    UserNode * Max;
    int NumberUsers;
    int NumberMessages;
    
};









