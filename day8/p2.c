#include <stdio.h>
int main()
{
    int a = 58;
    int *ptr = &a ;

    printf("value %d\n",a);
    printf("value address %p\n",&a);
    printf("pointer %p\n",ptr);
    
    return 0;
}