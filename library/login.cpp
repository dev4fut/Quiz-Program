#include "login.h"
#include <iostream>
#include <fstream>

using namespace std;

void SignIn()
{
    string data[100];
    string password, username;
    ifstream SignIn;
    SignIn.open("Sign.txt", ios::out | ios::in);
    
    cout << "Username: " << endl;
    getline(cin, username);
    cout << "Password: " << endl;
    getline(cin, password);

}