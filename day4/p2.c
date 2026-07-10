#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Answer = %d",a+b);
            break;

        case 2:
            printf("Answer = %d",a-b);
            break;

        case 3:
            printf("Answer = %d",a*b);
            break;

        case 4:
            printf("Answer = %d",a/b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}