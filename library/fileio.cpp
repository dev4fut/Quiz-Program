#include <iostream>
#include <fstream>
#include <filesystem>
#include <unistd.h>
#include "fileio.h"

using namespace std;

string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

void FileIO::open(string filename)
{
    char path[256];
    getcwd(path, 256);
    string fpath = convertToString(path, 256) + "/" + filename + ".txt";
    file.open(fpath, ios::binary);
}

void FileIO::write(string data) {
    const char* temp = data.c_str();
    this->file.write(temp, sizeof(temp));
}

void FileIO::close()
{
    this->file.close();
}