#ifndef GUI_H
#define GUI_H
#include "../controller/users.h"
#include "../controller/classes.h"
#include "../controller/subjects.h"
#include "../controller/questions.h"
#include "exercise.h"
#include "quiz.h"

using namespace std;
class Gui
{
    public:
    Users users;
<<<<<<< HEAD
    Exercise exercises;
=======
    Classes classes;
    Subjects subject;
    Questions questions;
    Exercise exercise;
    Quiz quiz;
>>>>>>> origin/ram-2-khe

    Gui();
    void testDialog();

    void loginDialog();

    void registerDiaglog();

    void main_menu();

    void menu_CRUD();

    void menu_users();

    void menu_classes();

    void menu_subjects();

    void menu_questions();
};

#endif