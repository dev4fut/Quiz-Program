#include "login.h"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

UserData::UserData()
{
    username = "";
    password = "";
}

// Register a user
void UserData::SignIn()
{
    ofstream login;
    login.open("./data/LoginData.txt", ios::ate | ios::app);

    cout << "Input Username: ";
    getline(cin, username);
    login << username;

    login << '\t';

    cout << "Input Password: ";
    getline(cin, password);
    login << password;

    login << '\n';

    login.close();
}

// Checking username and password base on LoginData.txt
void UserData::LogIn()
{
    ifstream login;
    login.open("./data/LoginData.txt");

    cout << "Username: ";
    getline(cin, checkusername);
    cout << "Password: ";
    getline(cin, checkpassword);

    if (strcmp(checkusername, username) == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    login.close();
}
