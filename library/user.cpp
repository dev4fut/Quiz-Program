#include <iostream>
#include <string>
#include "user.h"

using namespace std;

User::User()
{
    this->id = 0;
    this->name = "";
    this->numberUser = "";
    this->grade = "";
    this->username = "";
    this->password = "";
}

void User::input()
{
    cout << "Input User ID: ";
    cin >> this->id;
    cout << "\nUser Name: ";
    cin >> this->name;
    cout << "\nUser Number: ";
    cin >> this->numberUser;
    cout << "\nUser grade: ";
    cin >> this->grade;
    cout << "\nUsername: ";
    cin >> this->username;
    cout << "\nPassword: ";
    cin >> this->password;
}

void User::ouptut()
{
    cout << "ID: " << this->id;
    cout << "Name: " << this->name;
    cout << "User Number: " << this->numberUser;
    cout << "User grade: " << this->grade;
    cout << "Username: " << this->username;
    cout << "Password: " << this->password;
}

string User::toString()
{

    return "" + to_string(id) + "\t" + name + "\t" + numberUser + "\t" + grade + "\t" + username + "\t" + password + "\n";
}

void User::update()
{
    string temp;
    int num = 0;
    cout << "ID: ";
    cin >> temp;
    if (num != 0)
    {
        this->id = num;
    }
    cout << "\nName: ";
    cin >> temp;
    if (temp.length() != 0)
    {
        this->name = temp;
    }
    cout << "\nUser Number: ";
    cin >> temp;
    if (temp.length() != 0)
    {
        this->numberUser = temp;
    }
    cout << "\nUser grade: " << endl;
    cin >> temp;
    if (temp.length() != 0)
    {
        this->grade = temp;
    }
    cout << "Username: ";
    cin >> temp;
    if (temp.length() != 0)
    {
        this->username = temp;
    }
    cout << "\nPassword: ";
    cin >> temp;
    if (temp.length() != 0)
    {
        this->password = temp;
    }
}

void User::remove()
{
    this->id = 0;
    this->name = "";
    this->numberUser = "";
    this->grade = "";
    this->username = "";
    this->password = "";
}