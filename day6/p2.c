# include <stdio.h>
int main ()
{
    int n ,i;
    int ary[n];

    printf("enter the how many number\n");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    printf("numbers are ");
    for (i = 0; i < n ; i++)
    {
        printf("%d\n ",ary[i]);

    }

return 0 ;

}
