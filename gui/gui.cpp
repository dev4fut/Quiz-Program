#include "../controller/classes.h"
#include "../controller/questions.h"
#include "gui.h"
#include "../library/subject.h"
#include "../library/class.h"
#include "../controller/users.h"
#include <iostream>

using namespace std;

Quiz quiz;

Gui::Gui()
{
    users.read();
    classes.read();
    subjects.read();
    questions.read();
}

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

    switch (test)
    {
    case 1:
        exercise.exercise();
        break;
    case 2:
        quiz.quiz();
        break;
    default:
        system("exit");
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
        cout << "Login Successfully ^^";
        testDialog();
    }
    else
    {
        cout << "Oopsie, i think there is somethings wrong with the information";
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

void Gui::menu_users() 
{
    int choice;
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t________________________       USERS     ______________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to CREATE USERS |" << endl;
    cout << "\t| Press 2 to REMOVE USERS |" << endl;
    cout << "\t| Press 3 to UPDATE USERS |" << endl;
    cout << "\t| Press 4 to SHOW USERS |" << endl;
    cout << "\t| Press 5 to EXIT |" << endl;
    cout << "Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        users.input();
        break;
    case 2:
        // system("cls");
        // cout << "Choose id you want to remove";
        // cin >> ;
        // users.read();
        // users.remove();
        break;
    case 3:
        // users.update(int id);
        break;
    case 4:
        users.output();
    default:
        break;
    }
}

void Gui::menu_CRUD()
{
    int c;
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t________________________       MENU     ______________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to Menu USERS |" << endl;
    cout << "\t| Press 2 to Menu CLASSES |" << endl;
    cout << "\t| Press 4 to Menu SUBJECTS |" << endl;
    cout << "\t| Press 3 to Menu QUESTIONS |" << endl;
    cout << "\t| Press 5 to Menu TESTS |" << endl;
    cout << "\t| Press 6 EXIT. |" << endl;
    cout << "Your Choice: ";
    cin >> c;
    getchar();
    switch (c)
    {
    case 1:
        // menu_users();
        break;

    case 2:
        // menu_classes();
        break;
    case 3:
        // menu_subjects();
        break;
    case 4:
        // menu_questions();
        break;
    case 5:
        testDialog();
        break;
    default:
        system("cls");
        break;
    }
}