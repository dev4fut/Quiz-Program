#include "../library/user.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

User::User()
{
    username = "";
    password = "";
}

// Register a user
void User::SignUp()
{
    this->read();
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
void User::LogIn()
{
    ifstream login("./data/LoginData.txt");
    string checkusername, checkpassword;
    int count;

    cout << "Username: ";
    getline(cin, username);
    cout << "Password: ";
    getline(cin, password);
    
    while(login >> username >> password)
    {
        if (checkusername == username && checkpassword == password)
        {
            count = 1;
            system("cls");
        }
    }
    login.close();

    if (count == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
