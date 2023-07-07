#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

using namespace std;

class Subject
{
    public:
        int id;
        string name;
        string description;

        Subject();
        void input();
        void output();
        string toString();
        void update();
        void remove();
};

#endif