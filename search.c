#include<stdio.h>
#include "data.h"

void searchAccount()
{
    int num,i,flag=0;

    printf("\n========== SEARCH ACCOUNT ==========\n");

    printf("Enter account number: ");
    scanf("%d",&num);

    for(i=0;i<count;i++)
    {
        if(acc[i].accNo==num)
        {
            flag=1;

            printf("\nCustomer Details\n");
            printf("----------------------------\n");
            printf("Account Number : %d\n",acc[i].accNo);
            printf("Name           : %s\n",acc[i].name);
            printf("Balance        : %.2f\n",acc[i].balance);
            printf("Email          : %s\n",acc[i].email);
            printf("Phone          : %s\n",acc[i].phone);
        }
    }

    if(flag==0)
    {
        printf("Account not found.\n");
    }
}