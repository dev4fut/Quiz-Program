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
void User::SignIn()
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
void User::LogIn()
{
    ifstream login;
    login.open("./data/LoginData.txt");

    cout << "Username: ";
    getline(cin, username);
    cout << "Password: ";
    getline(cin, username);

    cout << "Username: " << "\n";
    while (login >> username)
    {
        username.push_back(username);
    }
    //    getline(cin, checkusername);

    //    login >> password;
    //    cout << "Password: " << '\n';
    //    getline(cin, checkpassword);
    /*
    if (checkusername == username)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }

        login.close();
    */
}
