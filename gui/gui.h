#ifndef GUI_H
#define GUI_H
#include "../controller/users.h"
#include "../exercise/exercise.h"
#include "../quiz/quiz.h"

using namespace std;
class Gui
{
    public:
    Users users;
    Exercise exercises;
    Quiz quiz;

    Gui();
    void testDialog();

    void loginDialog();

    void registerDiaglog();

    void main_menu();
};

#endif