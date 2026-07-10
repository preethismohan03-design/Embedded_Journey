#include <stdio.h>

int main()
{
    int signal;

    printf("Traffic Signal\n");
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");

    printf("Enter your choice: ");
    scanf("%d", &signal);

    switch(signal)
    {
        case 1:
            printf("Red Signal - STOP\n");
            break;

        case 2:
            printf("Yellow Signal - GET READY\n");
            break;

        case 3:
            printf("Green Signal - GO\n");
            break;

        default:
            printf("Invalid Signal\n");
    }

    return 0;
}