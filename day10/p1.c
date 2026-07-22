#include <stdio.h>

struct Student
{
    char name[30];
    int age;
    float marks;
};

int main()
{
    struct Student s1;

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Age: ");
    scanf("%d", &s1.age);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details\n");
    printf("Name  : %s\n", s1.name);
    printf("Age   : %d\n", s1.age);
    printf("Marks : %.2f\n", s1.marks);

    return 0;
}