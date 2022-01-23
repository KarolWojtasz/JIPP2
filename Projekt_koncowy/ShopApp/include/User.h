//
// Created by Admin on 16.01.2022.
//

#ifndef JIPP_USER_H
#define JIPP_USER_H
#include <string>
#include <vector>
using namespace std;
class User {
private:

    string username;
    string password;
public:
    int ID;
    User(vector<User> userList);
    User(int ID, string username,string password);
    string getUsername();
    string getPassword();
    void getAllInfo();
    void removeFromFile();
};


#endif //JIPP_USER_H
