#ifndef CLASS_H
#define CLASS_H

#include <string>

using namespace std;

class Classroom
{
    public:
        int id;
        string name;

    Classroom();
    Classroom(string name, int id);
    void input();
    void output();
    string toString();
    void update();
    void remove();
};

#endif