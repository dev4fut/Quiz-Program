#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

using namespace std;

class Subject
{
    public:
        int idSubject;
        string nameSubject;
        string descriptionSubject;

        Subject();
        void initSubject(int idSubject, string name, string descriptionSubject);
        void inputSubject();
        void outputSubject();
        void updateSubject();
        void deleteSubject();
};

#endif