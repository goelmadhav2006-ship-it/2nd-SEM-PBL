#include<stdio.h>
#include "data.h"

void displayAccount(int i)
{
    printf("\n========== ACCOUNT DETAILS ==========\n");

    printf("Account Number : %d\n",acc[i].accNo);
    printf("Customer Name  : %s\n",acc[i].name);
    printf("Balance        : %.2f\n",acc[i].balance);
    printf("Email          : %s\n",acc[i].email);
    printf("Phone Number   : %s\n",acc[i].phone);

    if(acc[i].isActive==1)
        printf("Account Status : Active\n");

    else
        printf("Account Status : Frozen\n");
}