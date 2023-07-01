#include <iostream>
#include "library/student.h"

int main() {
    Student student;
    student.InputStudent();
    student.OutputStudent();
    student.UpdateStudent();
    student.DeleteStudent();
    
    return 0;
}