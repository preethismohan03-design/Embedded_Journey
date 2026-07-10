#include <stdio.h>
int main ()
{
    int a , v; // a = age v= voterid it can be neither 1 or 0 
    printf("Enter the age:");
    scanf("%d",&a);
    printf("Enter the voter ID (1 = Yes, 0 = No): ");
    scanf("%d",&v);

    if (a >= 18)
    {
       if (v == 1){
        printf("eligible\n");
       }
       else {
        printf("not have voter id \n");
       }

    }
    else{
        printf("not eligible \n");
    }
    return 0;

}
