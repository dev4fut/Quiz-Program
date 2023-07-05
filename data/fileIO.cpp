#include <iostream>
#include <fstream>
#include "data.h"
#include "../library/class.h"
#include "../library/Question.h"
#include "../library/student.h"
#include "../library/subject.h"


using namespace std;

Classroom classroom;
Question question;
Student student;
Subject subject;

void writeFileClass() {
    string temp = classroom.ClassName + "\t" + to_string(classroom.ClassID);
    ofstream fc;
    fc.open("E://Code/Quiz-Program/data/class.txt", ios::out | ios::app);
    fc << temp;
    fc.close();
}

void readFileClass() {
    ifstream fc;
    fc.open("E://Code/Quiz-Program/data/class.txt", ios::in);
    fc >> classroom.ClassName;
    fc >> classroom.ClassID;
    fc.close();
}

void inputListClass(string arrayName) {

}