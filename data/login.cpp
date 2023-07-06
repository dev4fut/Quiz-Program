#include "login.h"

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
    string checkpassword, checkusername;

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
