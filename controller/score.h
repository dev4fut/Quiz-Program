#ifndef SCORE_H
#define SCORE_H

using namespace std;

// total questions, correct answer

class Score
{
    public:
    int total;
    int correct;
    Score(int total);
    void countTrue();
    void calcScore();
};

#endif