#ifndef EXERCISE_H
#define EXERCISE_H

#include "../controller/score.h"

using namespace std;

class Exercise
{
    public:
    Questions questions;
    Score score;
    Exercise();
    void exerciseStart();
    float takeExercise(int numEx);
    void exercise();
    void quiz();
};

#endif