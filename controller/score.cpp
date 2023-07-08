#include <iostream>
#include "../controller/questions.h"
#include "score.h"
#include <cmath>

using namespace std;

Score::Score() {
    this->total = 10;
    this->correct = 0;
}

Score::Score(int total)
{
    this->total = total;
    this->correct = 0;
}

<<<<<<< HEAD
void Score::countTrue() {
    this->correct++;
}


float Score::calcScore() {
    return round(4 * this->correct * 10 / this->total) / 4;
}
=======
void Score::countTrue()
{
    
}

void Score::calcScore()
{

}
>>>>>>> 22cf3d6bcfd0d8ba903e13be9bbed839efce5e00
