//
// Created by Admin on 16.01.2022.
//

#ifndef JIPP_USER_H
#define JIPP_USER_H
#include <string>
#include <vector>
using namespace std;

/**
 * klasa przechowujaca profile uzytkownikow
 */
class User {

private:
    /**
     * nazwa uzytkownika typu string
     */
    string username;
    /**
     * hasło uzytkownika typu string
     */
    string password;
public:
    /**
     * unikalne ID typu int
     */
    int ID;

    /**
     * konstruktor wywoływany do rejestracji uzytkownika
     * @param userList vector z dotychczasową listą uzytkownikó
     */
    User(vector<User> userList);

    /**
     * konstruktor wywoływany przy tworzeniu użytkownika z pliku
     * @param ID ID typu ing
     * @param username  nazwa użytkownika typu string
     * @param password hasło użytkownika typu string
     */
    User(int ID, string username,string password);
    /**
     * getter do uzyskania nazwy użytkownika
     * @return nazwa użytkownika typu string
     */
    string getUsername();
    /**
     * getter do uzyskania hasła użytkownika
     * @return hasło użytkownika typu string
     */
    string getPassword();
    /**
     * getter wypisujący wszystkie informacje o użytkowniku
     */
    void getAllInfo();
    /**
     * funkcja do usunięcia użytkowanika z pliku
     */
    void removeFromFile();
};


#endif //JIPP_USER_H
