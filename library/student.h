#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
    public:
    int id;
    string name;
    string numberStudent;
    string grade;

    void InputStudent();
    void OutputStudent();
    void UpdateStudent();
    void DeleteStudent();
};

#endif