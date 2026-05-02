#include<stdio.h>
#include "data.h"

void totalBalance()
{
    int i;
    float sum=0;

    for(i=0;i<count;i++)
    {
        sum = sum + acc[i].balance;
    }

    printf("\n========== BANK SUMMARY ==========\n");
    printf("Total Customers : %d\n",count);
    printf("Total Balance   : %.2f\n",sum);
}