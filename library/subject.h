#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

using namespace std;

class Subject
{
    public:
        string name;
        string description;
        string type;
        string idSubject;

        Subject();
        void initSubject();
        void inputSubject();
        void outputSubject();
        void addSubject();
        void removeSubject();
        void deleteSubject();
};

#endif