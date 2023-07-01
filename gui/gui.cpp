#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct UserInfo
{
    int id;
    string password;
};

void registerDialogs()
{
    struct UserInfo info;
    cout << "Student ID: " << endl;
    cin >> info.id;
    cout << "Passwords: " << endl;
    cin >> info.password;
}

void welcomeMenu()
{
    cout << "\t\t\t\tWelcome To Quiz" << endl;
}

void loginMenu()
{
    cout << "Sign in:" << endl;
    cout << "1. Login Account" << endl;
    cout << "2. Register Account" << endl;
    cout << "3. Forgot Password" << endl;
    cout << "4. Exit" << endl;
}

int main()
{
    welcomeMenu();
    getch();
    loginMenu();

    return 0;
}