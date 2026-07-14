#include <stdio.h>

// Function Prototypes
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);

int main()
{
    int a, b, choice;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("\nCalculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Answer = %d\n", add(a, b));
            break;

        case 2:
            printf("Answer = %d\n", sub(a, b));
            break;

        case 3:
            printf("Answer = %d\n", mul(a, b));
            break;

        case 4:
            if(b != 0)
            {
                printf("Answer = %.2f\n", divi(a, b));
            }
            else
            {
                printf("Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}

// Function Definitions

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{
    return (float)a / b;
}