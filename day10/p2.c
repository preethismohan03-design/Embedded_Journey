#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student s1 = {"Preethi", 24, 91.5};

    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%.2f\n", s1.marks);

    return 0;
}