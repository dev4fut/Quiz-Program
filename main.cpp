#include "library/subject.h"
#include "library/user.h"
#include "library/Question.h"
#include "exercise/counting.h"
#include "controller/classes.h"
#include "controller/questions.h"
#include "data/login.h"
#include "quiz/quiz.h"

using namespace std;

int main()
{
    // int i;
    // Classes classes;
    // classes.input();
    // classes.write();
    // classes.read();
    // classes.output();

    // Quiz quiz;
    // quiz.start();

    // Question question;
    // question.input();
    // question.output();
    // question.update();
    // question.output();

    Questions questions;
    // questions.input();
    // questions.output();
    // questions.write();
    questions.read();
    questions.output();
    
    return 0;
}
