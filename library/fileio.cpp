#include <iostream>
#include <fstream>
#include "fileio.h"

using namespace std;

FileIO::FileIO()
{
    this->file_name = "file.txt";
    this->file_path = "data/";
}

void readfile()
{

}

void writefile()
{

}

void appendfile()
{

}

void FileIO::closeFile(string file_name)
{
    file_name.close();
}