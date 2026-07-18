#include <stdio.h>

int main()
{
    int ary[5];
    int *start, *end;
    int i, temp;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &ary[i]);
    }

    start = ary;
    end = ary + 4;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("\nReversed Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}