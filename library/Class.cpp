#include <stdio.h>
#include <Class.h>
#include <string.h>

struct Class
{
    char className[10];
    int classID;
};

struct Class class;

int InputClass()
{
    printf("Input Class Name: ");
    scanf("%^n%s", &class.className);
    printf("\nInput Class ID: ");
    scanf("%d", &class.classID);

    return InputClass;
}

int OutputClass()
{
    printf("\nClass Name: ", class.className);
    printf("\nClass ID: ", class.classID);

    return OutputClass;
}

int UpdateClass()
{
    char temp = " ";
    printf("\nUpdate class name: ");
    scanf("%^n%s", &temp);
    if (temp != " ")
    {
        strcpy(class.className, temp);
        printf("\nClass Name: ", class.className);
        temp = " ";
    }
    else
    {
        printf("\nNot updated!\n");
        temp = " ";
    }

    printf("\nUpdate class ID: ");
    scanf("%^n%s", &temp);
    if (temp != " ")
    {
        strcpy(class.classID, temp);
        printf("\nClass ID: ", class.classID);
        temp = " ";
    }
    else
    {
        printf("\nNot updated!\n");
        temp = " ";
    }

    return UpdateClass;
}

int DeleteClass() {
    free(class.className);
    free(class.classID);

    return DeleteClass;
}