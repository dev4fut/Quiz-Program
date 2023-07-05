#include <iostream>
#include <fstream>
#include "fileIO.h"
#include "../library/class.h"
#include "../library/Question.h"
#include "../library/student.h"
#include "../library/subject.h"
#include "../controller/classes.h"
#include "../controller/questions.h"
#include "../controller/students.h"
#include "../controller/subjects.h"


using namespace std;

void FileIO::write(string data[]) {

    fw << data;
    fw.close();
}