#include <stdio.h>

int main()
{
    float balance, withdraw;

    printf("Enter Account Balance: ");
    scanf("%f", &balance);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdraw);

    if(balance > 0)
    {
        if(withdraw <= balance)
        {
            balance = balance - withdraw;

            printf("Withdrawal Successful.\n");
            printf("Remaining Balance = %.2f\n", balance);
        }
        else
        {
            printf("Insufficient Balance.\n");
        }
    }
    else
    {
        printf("Invalid Account Balance.\n");
    }

    return 0;
}