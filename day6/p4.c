#include <stdio.h>

int main()
{
    int i, temp, n;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int ary[n];

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    for(i = 0; i < n / 2; i++)
    {
        temp = ary[i];
        ary[i] = ary[n - 1 - i];
        ary[n - 1 - i] = temp;
    }

    printf("\nReversed Array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}