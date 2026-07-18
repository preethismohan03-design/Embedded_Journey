#include <stdio.h>

int main()
{
    int ary[5];
    int i;

    int *ptr;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &ary[i]);
    }

    ptr = ary;

    printf("\nArray Elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}