#include <iostream>
#include <string.h>
#include "gui.h"

using namespace std;

Gui::Gui() {
    this->users.read();
    this->classes.read();
    this->subjects.read();
    this->questions.read();

    this->users.output();
    getchar();
}

const char* getString(char x) {
    string s(1, x);
    const char* p = s.c_str();
    return p;
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
        exercise.quiz();
        break;
    default:
        system("exit");
        break;
    }
}

void Gui::loginDialog()
{
    string checkusername, checkpassword;
    const char* s1("g");
    const char* s2("v");
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t________________________       LOGIN     ______________________________\n\n\n";
    cout << "                                                                             \n\n";

    getchar();
    cout << "Username: ";
    getline(cin, checkusername);
    cout << "Password: ";
    getline(cin, checkpassword);

    if (users.checkLogin(checkusername, checkpassword))
    {
        cout << "You're Right";
        if (strcmp(getString(checkusername.at(0)), s1) == 0 && strcmp(getString(checkusername.at(1)), s2) == 0)
        {
            menu_CRUD();
        }
        
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
        system("exit");
        break;
    }
}

void Gui::menu_users() {
    int id;
    int c;
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t______________________       MENU USER    ____________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to INPUT USERS |" << endl;
    cout << "\t| Press 2 to OUTPUT USERS |" << endl;
    cout << "\t| Press 3 to UPDATE USERS |" << endl;
    cout << "\t| Press 4 to REMOVE USERS |" << endl;
    cout << "\t| Press 5 to return MENU CRUD |" << endl;
    cout << "\t| Press 6 EXIT. |" << endl;
    cout << "Your Choice: ";
    cin >> c;
    getchar();
    switch (c) {
        case 1:
            users.input();
            break;
        case 2:
            users.output();
            break;
        case 3:
            cout << "\t\t\t-------------------------------- UPDATE --------------------------------\n\n" << endl;
            cout << "Choose id to update: ";
            cin >> id;
            getchar();
            if (id < users.n + 1)
            {
                users.update(id);
            } else
            {
                cout << "<<<<<< NO FOUND THAT ID. >>>>>>\n";
                cout << "You will be returned to MENU USER.";
                menu_users();
            }
            break;
        case 4:
            cout << "\t\t\t-------------------------------- UPDATE --------------------------------\n\n" << endl;
            cout << "Choose id to remove: ";
            cin >> id;
            getchar();
            if (id < users.n + 1)
            {
                users.remove(id);
                cout << "Removed user " << id << endl;
            } else
            {
                cout << "<<<<<< NO FOUND THAT ID. >>>>>>\n";
                cout << "You will be returned to MENU USER.";
                menu_users();
            }
            break;
        case 5:
            menu_CRUD();
            break;
        default:
            system("exit");
            break;
    }
}

void Gui::menu_classes() {
    int id;
    int c;
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t______________________      MENU CLASS    ____________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to INPUT CLASSES |" << endl;
    cout << "\t| Press 2 to OUTPUT CLASSES |" << endl;
    cout << "\t| Press 3 to UPDATE CLASSES |" << endl;
    cout << "\t| Press 4 to REMOVE CLASSES |" << endl;
    cout << "\t| Press 5 to return MENU CRUD |" << endl;
    cout << "\t| Press 6 EXIT. |" << endl;
    cout << "Your Choice: ";
    cin >> c;
    getchar();
    switch (c) {
        case 1:
            classes.input();
            break;
        case 2:
            classes.output();
            break;
        case 3:
            cout << "\t\t\t-------------------------------- UPDATE --------------------------------\n\n" << endl;
            cout << "Choose id to update: ";
            cin >> id;
            getchar();
            if (id < classes.n + 1)
            {
                classes.update(id);
            } else
            {
                cout << "<<<<<< NO FOUND THAT ID. >>>>>>\n";
                cout << "You will be returned to MENU CLASS.";
                menu_classes();
            }
            break;
        case 4:
            cout << "\t\t\t-------------------------------- UPDATE --------------------------------\n\n" << endl;
            cout << "Choose id to remove: ";
            cin >> id;
            getchar();
            if (id < classes.n + 1)
            {
                classes.remove(id);
                cout << "Removed class " << id << endl;
            } else
            {
                cout << "<<<<<< NO FOUND THAT ID. >>>>>>\n";
                cout << "You will be returned to MENU CLASS.";
                menu_classes();
            }
            break;
        case 5:
            menu_CRUD();
            break;
        default:
            system("exit");
            break;
    }
}

void Gui::menu_subjects() {
    int id;
    int c;
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t____________________      MENU SUBJECT    __________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to INPUT SUBJECT |" << endl;
    cout << "\t| Press 2 to OUTPUT QUESTIO |" << endl;
    cout << "\t| Press 3 to UPDATE SUBJECT |" << endl;
    cout << "\t| Press 4 to REMOVE SUBJECT |" << endl;
    cout << "\t| Press 5 to return MENU CRUD |" << endl;
    cout << "\t| Press 6 EXIT. |" << endl;
    cout << "Your Choice: ";
    cin >> c;
    getchar();
    switch (c) {
        case 1:
            subjects.input();
            break;
        case 2:
            subjects.output();
            break;
        case 3:
            cout << "\t\t\t-------------------------------- UPDATE --------------------------------\n\n" << endl;
            cout << "Choose id to update: ";
            cin >> id;
            getchar();
            if (id < subjects.n + 1)
            {
                subjects.update(id);
            } else
            {
                cout << "<<<<<< NO FOUND THAT ID. >>>>>>\n";
                cout << "You will be returned to MENU SUBJECT.";
                menu_subjects();
            }
            break;
        case 4:
            cout << "\t\t\t-------------------------------- UPDATE --------------------------------\n\n" << endl;
            cout << "Choose id to remove: ";
            cin >> id;
            getchar();
            if (id < subjects.n + 1)
            {
                subjects.remove(id);
                cout << "Removed subject " << id << endl;
            } else
            {
                cout << "<<<<<< NO FOUND THAT ID. >>>>>>\n";
                cout << "You will be returned to MENU SUBJECT.";
                menu_subjects();
            }
            break;
        case 5:
            menu_CRUD();
            break;
        default:
            system("exit");
            break;
    }
}

void Gui::menu_questions() {
    int id;
    int c;
    system("cls");
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t____________________      MENU QUESTION    __________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to INPUT QUESTION |" << endl;
    cout << "\t| Press 2 to OUTPUT QUESTIO |" << endl;
    cout << "\t| Press 3 to UPDATE QUESTION |" << endl;
    cout << "\t| Press 4 to REMOVE QUESTION |" << endl;
    cout << "\t| Press 5 to return MENU CRUD |" << endl;
    cout << "\t| Press 6 EXIT. |" << endl;
    cout << "Your Choice: ";
    cin >> c;
    getchar();
    switch (c) {
        case 1:
            questions.input();
            break;
        case 2:
            questions.output();
            break;
        case 3:
            cout << "\t\t\t-------------------------------- UPDATE --------------------------------\n\n" << endl;
            cout << "Choose id to update: ";
            cin >> id;
            getchar();
            if (id < questions.n + 1)
            {
                questions.update(id);
            } else
            {
                cout << "<<<<<< NO FOUND THAT ID. >>>>>>\n";
                cout << "You will be returned to MENU QUESTION.";
                menu_questions();
            }
            break;
        case 4:
            cout << "\t\t\t-------------------------------- UPDATE --------------------------------\n\n" << endl;
            cout << "Choose id to remove: ";
            cin >> id;
            getchar();
            if (id < questions.n + 1)
            {
                questions.remove(id);
                cout << "Removed QUESTION " << id << endl;
            } else
            {
                cout << "<<<<<< NO FOUND THAT ID. >>>>>>\n";
                cout << "You will be returned to MENU QUESTION.";
                menu_questions();
            }
            break;
        case 5:
            menu_CRUD();
            break;
        default:
            system("exit");
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
        menu_users();
        break;

    case 2:
        menu_classes();
        break;
    case 3:
        menu_subjects();
        break;
    case 4:
        menu_questions();
        break;
    case 5:
        testDialog();
        break;
    default:
        system("cls");
        break;
    }
}