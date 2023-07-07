#include <iostream>
#include <fstream>
#include <filesystem>
#include <unistd.h>
#include "fileio.h"

using namespace std;

/*
    getcwd() returns the current working directory
    fpath is directory of data
*/
void FileIO::open(string filename)
{
    char path[256];
    string p = getcwd(path, 256);
    string fpath = p + "\\data\\" + filename + ".txt";
    file.open(fpath, ios::in | ios::out);
}

/*
    filename: name of file which stored the data
    data: data to store
    n: number of bytes to store
*/
void FileIO::write(string filename, string data, int n) {
    this->open(filename);
    this->file << n;
    this->file << "\n";
    this->file << data;
    file.close();
}

/*
    close file
*/
void FileIO::close()
{
    this->file.close();
}