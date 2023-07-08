<<<<<<< HEAD
#include "library/class.h"
#include "library/Question.h"
#include "library/user.h"
#include "controller/users.h"
#include "library/subject.h"
#include "../library/class.h"
#include "exercise/exercise.h"
#include "quiz/quiz.h"
=======
#include "../controller/classes.h"
#include "../controller/questions.h"
#include "gui.h"
#include "../library/subject.h"
#include "../library/class.h"
>>>>>>> 04b30f3ed9ada768368e8d129637db41142eb591
#include <iostream>

using namespace std;

void Gui::testDialog()
{
    int test;
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t________________________       MENU     ______________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to EXERCISE |" << endl;
    cout << "\t| Press 2 to QUIZ |" << endl;
    cout << "\t| Press 3 EXIT. |" << endl;
    cout << "Your Choice: ";
    cin >> test;

    switch(test)
    {
        case 1:
            break;
        case 2:
            quiz.start();
            break;
        default:
            break;
    }
}

void Gui::loginDialog()
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

void Gui::registerDiaglog()
{  
    cout << "Please Sign Up Your Infomation!" << endl;
    users.input();
    main_menu();
}

void Gui::main_menu()
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
    default:
        system("cls");
        break;
    }
}
