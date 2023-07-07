#ifndef FILEIO_H
#define FILEIO_H

#include <string>
#include <fstream>

using namespace std;

class FileIO
{
    public:
        fstream file;
        
        void open(string filename);
        void write(string filename, string data, int n);
        void close();
};

#endif