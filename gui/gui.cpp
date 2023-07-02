#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
// Registering System
class User
{
    public:
        int id;
        string password;

        void registerDialog();
        void optionsDialog();
};

void User::registerDialog()
{
    cout << "Student ID: " << endl;
    cin >> this->id;
    cout << "Passwords: " << endl;
    cin >> this->password;
}

// Just some txt print out

void welcomeMenu()
{
    cout << "\t\t\t\tWelcome To Quiz" << endl;
}

void User::optionsDialog()
{
    cout << "\t\t\tSign in:" << endl;
    cout << "1. Login Account" << endl;
    cout << "2. Register Account" << endl;
    cout << "3. Forgot Password" << endl;
    cout << "4. Exit" << endl;
}
