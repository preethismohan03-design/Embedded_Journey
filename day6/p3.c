#include <stdio.h>

int main()
{
    int num[5];
    int i, sum = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}