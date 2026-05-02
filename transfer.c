#include<stdio.h>
#include "data.h"

void transferMoney(int i)
{
    int to,j,flag=0;
    float amt;

    printf("\n========== MONEY TRANSFER ==========\n");

    printf("Enter receiver account number: ");
    scanf("%d",&to);

    for(j=0;j<count;j++)
    {
        if(acc[j].accNo==to)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Receiver account not found.\n");
        return;
    }

    printf("Enter transfer amount: ");
    scanf("%f",&amt);

    if(acc[i].balance-amt<1500)
    {
        printf("Transfer failed due to insufficient balance.\n");
        return;
    }

    acc[i].balance = acc[i].balance - amt;
    acc[j].balance = acc[j].balance + amt;

    save();

    printf("Money transferred successfully.\n");
    printf("Available Balance : %.2f\n",acc[i].balance);
}