#include<stdio.h>
#include "data.h"

void deleteAccount()
{
    int num,i,j,flag=0;

    printf("\n========== DELETE ACCOUNT ==========\n");

    printf("Enter account number: ");
    scanf("%d",&num);

    for(i=0;i<count;i++)
    {
        if(acc[i].accNo==num)
        {
            flag=1;

            for(j=i;j<count-1;j++)
            {
                acc[j]=acc[j+1];
            }

            count--;

            save();

            printf("Account deleted successfully.\n");
        }
    }

    if(flag==0)
    {
        printf("Account not found.\n");
    }
}