#ifndef FILEIO_H
#define FILEIO_H

#include <iostream>
#include <fstream>
#include "../controller/classes.h"
#include "../controller/questions.h"
#include "../controller/students.h"
#include "../controller/subjects.h"

using namespace std;

class FileIO {
    public:

    void write(string data[]);
    void read();
};
#endif