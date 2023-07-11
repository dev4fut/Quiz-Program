#include "library/Question.h"
#include "controller/questions.h"
#include "gui/quiz.h"
#include "gui/gui.h"
using namespace std;

int main()
{
    // Exercise exercise;
    // exercise.takeExercise(2);

    // Quiz quiz;
    // quiz.quiz();

    // Question question;
    // question.output();
    Users users;
    users.input();
    users.write();
    users.output();
    return 0;
}
