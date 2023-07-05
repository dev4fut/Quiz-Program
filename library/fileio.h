#ifndef FILEIO_H
#define FILEIO_H

#include <string>
#include <fstream>

using namespace std;

class FileIO
{
    public:
        ofstream file;
        
        void open(string filename);
        void close();
        void write(string data);
};

#endif