#ifndef QUIZ_H
#define QUIZ_H
#include <iostream>
#include "../controller/score.h"

using namespace std;

class Quiz {
    public:
    Questions questions;
    Score score;
    Quiz();

    
    void quizStart();
    void takeQuiz(int numEx);
    void quiz();
    
};


#endif