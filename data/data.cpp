#include <iostream>
#include <fstream>
#include "data.h"
#include "../library/class.h"
#include "../library/Question.h"
#include "../library/student.h"
#include "../library/subject.h"


using namespace std;

void writeFile(string fn, string data) {
    ofstream f;
    f.open(fn, ios::out);
    f << data;
    f.close();
}

void readFileClass() {
    ifstream ClassFile;
    ClassFile.open("class.txt", ios::in);
    ClassFile >> classroom.ClassName;
    ClassFile >> classroom.ClassID;
    ClassFile.close();
}

void inputListClass(string arrayName) {

}