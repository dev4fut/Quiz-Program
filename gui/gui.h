#ifndef GUI_H
#define GUI_H
#include "../controller/users.h"
#include "exercise.h"
#include "quiz.h"

using namespace std;
class Gui
{
    public:
    Users users;
    Exercise exercises;

    Gui();
    void testDialog();

    void loginDialog();

    void registerDiaglog();

    void main_menu();
};

#endif