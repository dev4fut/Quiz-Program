#include "library/subject.h"
#include "library/user.h"
#include "library/Question.h"
#include "exercise/counting.h"
#include "./controller/classes.h"
#include "data/login.h"

using namespace std;

int main()
{
    int i;
    Classes classes;
    classes.input();
    classes.write();
    classes.read();
    classes.output();
    return 0;
}
