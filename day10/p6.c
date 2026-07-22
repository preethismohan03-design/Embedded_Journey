#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

void display(struct Student *ptr);

int main()
{
    struct Student s1;

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Age: ");
    scanf("%d", &s1.age);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    display(&s1);

    return 0;
}

void display(struct Student *ptr)
{
    printf("\nStudent Details\n");

    printf("Name  : %s\n", ptr->name);
    printf("Age   : %d\n", ptr->age);
    printf("Marks : %.2f\n", ptr->marks);
}