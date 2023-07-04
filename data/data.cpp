#include <iostream>
#include <fstream>
#include "data.h"
#include "../library/class.h"
#include "../library/Question.h"
#include "../library/student.h"
#include "../library/subject.h"


using namespace std;

Classroom classroom;

void writeFileClass() {
    ofstream ClassFile;
    ClassFile.open("class.txt", ios::out);
    ClassFile << classroom.ClassName << endl;
    ClassFile << classroom.ClassID << endl;
    ClassFile.close();
}

void readFileClass() {
    ifstream ClassFile;
    ClassFile.open("class.txt", ios::in);
    ClassFile >> classroom.ClassName;
    ClassFile >> classroom.ClassID;
    ClassFile.close();
}