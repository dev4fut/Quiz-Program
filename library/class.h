#ifndef CLASS_H
#define CLASS_H

#include <string>

using namespace std;

class Classroom
{
    public:
        string ClassName;
        int ClassID;

    Classroom();

    void initClass(string ClassName, int ClassID);
    void inputClass();
    void outputClass();
    void updateClass();
    void removeClass();
};

#endif