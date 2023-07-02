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

void crudDialog()
{
    int dialog;
    cout << "\t\t\t\t\t\tQuiz Program Update System\n\n\n\n\n" << endl;
    cout << "1. Create Student Info" << endl;
    cout << "2. Read Student Info" << endl;
    cout << "3. Update Student Info" << endl;
    cout << "4. Remove Student Info" << endl;
    cout << "5. Exit" << endl;
    cin >> dialog;
    switch (dialog)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    
    default:
        break;
    }
}