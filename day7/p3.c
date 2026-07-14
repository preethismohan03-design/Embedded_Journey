#include <stdio.h>

int add(int a,int b);

int main()
{
    int answer;

    answer = add(20,30);

    printf("Sum = %d",answer);

    return 0;
}

int add(int a,int b)
{
    return a+b;
}