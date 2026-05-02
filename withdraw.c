#include<stdio.h>
#include "data.h"

void withdrawMoney(int i)
{
    float amt;

    printf("\n========== WITHDRAW MONEY ==========\n");

    printf("Enter amount to withdraw: ");
    scanf("%f",&amt);

    if(acc[i].balance-amt<1500)
    {
        printf("Transaction declined.\n");
        printf("Minimum balance of Rs.1500 must remain in account.\n");
        return;
    }

    acc[i].balance = acc[i].balance - amt;

    save();

    printf("Withdrawal completed successfully.\n");
    printf("Remaining Balance : %.2f\n",acc[i].balance);
}