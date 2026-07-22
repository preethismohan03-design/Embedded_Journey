#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

void display(struct Student s);

int main()
{
    struct Student s1 = {"Preethi", 24};

    display(s1);

    return 0;
}

void display(struct Student s)
{
    printf("Name : %s\n", s.name);
    printf("Age  : %d\n", s.age);
}