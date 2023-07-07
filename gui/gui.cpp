#include "library/class.h"
#include "library/Question.h"
#include "library/user.h"
#include "library/subject.h"
#include "library/class.h"
#include "controller/users.h"
#include <iostream>

using namespace std;
Users users;
void main_menu();

void loginDialog()
{
    string checkusername, checkpassword;

    cout << "Username: ";
    getline(cin, checkusername);
    cout << "Password: ";
    getline(cin, checkpassword);
    if (users.checkLogin(checkusername, checkpassword))
    {
        cout << "You're Right";
    }
    else
    {
        cout << "You're Left";
        main_menu();
    }
}

void registerDiaglog()
{
    
    cout << "Please Sign Up Your Infomation!" << endl;
    users.input();
    main_menu();
}

void main_menu()
{
    int c;
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t________________________       MENU     ______________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to SIGNUP |" << endl;
    cout << "\t| Press 2 to LOGIN |" << endl;
    cout << "\t| Press 3 EXIT. |" << endl;
    cout << "Your Choice: ";
    cin >> c;

    switch (c)
    {
    case 1:
        registerDiaglog();
        break;

    case 2:
        loginDialog();
        break;
    }
}
