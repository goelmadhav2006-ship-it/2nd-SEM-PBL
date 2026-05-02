#include<stdio.h>
#include "data.h"

void showAll()
{
    int i;

    printf("\n========== ALL ACCOUNTS ==========\n");

    for(i=0;i<count;i++)
    {
        printf("\n----------------------------------\n");
        printf("Account Number : %d\n",acc[i].accNo);
        printf("Name           : %s\n",acc[i].name);
        printf("Balance        : %.2f\n",acc[i].balance);
        printf("Email          : %s\n",acc[i].email);
        printf("Phone          : %s\n",acc[i].phone);

        if(acc[i].isActive==1)
            printf("Status         : Active\n");

        else
            printf("Status         : Frozen\n");
    }
}