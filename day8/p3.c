#include <stdio.h>
int main ()
{
    int a =85;
    int *ptr = &a;

    printf("bfr value %d\n",a);

    *ptr = 63;

    printf("afr value %d",a);

    return 0;
}