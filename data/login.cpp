#include "login.h"
#include <iostream>
#include <fstream>
#include <string>

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
    int checkpassword, checkusername;

    cout << "Username: ";
    getline(cin, username);

    cout << "Password: ";
    getline(cin, password);

    login.close();
}
