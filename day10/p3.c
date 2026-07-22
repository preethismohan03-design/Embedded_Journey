#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main()
{
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);
    }

    printf("\nStudent Details\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nName : %s\n", s[i].name);
        printf("Age  : %d\n", s[i].age);
    }

    return 0;
}