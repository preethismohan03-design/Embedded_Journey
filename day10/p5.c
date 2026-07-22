
#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main()
{
    struct Student s1 = {"Preethi", 24};

    struct Student *ptr;

    ptr = &s1;

    printf("Name : %s\n", ptr->name);
    printf("Age  : %d\n", ptr->age);

    return 0;
}