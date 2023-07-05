#include <iostream>
#include <fstream>
#include <filesystem>
#include "fileio.h"

using namespace std;
using std::filesystem::current_path;


void FileIO::open(string filename)
{
    string path;
    getcwd(filename);
    FILE *file = fopen(path.c_str(), "rb+");
}

void FileIO::readFile()
{

}

void FileIO::writeFile()
{
    string path = this->file_path + this->file_name + this->file_extension;
    ofstream writefile(path, ios::out | ios::binary);
    if (!writeFile)
    {
        cout << "Cannot open file " << endl;
        return;
    }
    for (int i = 0; i < sizeof(); i++)
    {

    }
}

void FileIO::closeFile(FILE *file)
{
    fclose(file);
}