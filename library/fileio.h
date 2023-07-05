#ifndef FILEIO_H
#define FILEIO_H

#include <string>

using namespace std;

class FileIO
{
    public:
        string file_name;
        string file_path;
        string file_extension;

        FileIO();
        void writeFile();
        void readFile();
        void closeFile();
        void appendFile();
};

#endif