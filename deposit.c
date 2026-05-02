#include<stdio.h>
#include "data.h"

void depositMoney(int i)
{
    float amt;

    printf("\n========== DEPOSIT MONEY ==========\n");

    printf("Enter amount to deposit: ");
    scanf("%f",&amt);

    acc[i].balance = acc[i].balance + amt;

    save();

    printf("Amount deposited successfully.\n");
    printf("Updated Balance : %.2f\n",acc[i].balance);
}