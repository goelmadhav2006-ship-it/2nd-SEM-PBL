#include<stdio.h>
#include "data.h"

void createAccount()
{
    int num,i,flag=0;

    printf("\n========== CREATE ACCOUNT ==========\n");

    printf("Enter account number: ");
    scanf("%d",&num);

    for(i=0;i<count;i++)
    {
        if(acc[i].accNo==num)
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        printf("Account number already exists.\n");
        return;
    }

    acc[count].accNo=num;

    printf("Enter customer name: ");
    scanf(" %[^\n]",acc[count].name);

    printf("Enter opening balance: ");
    scanf("%f",&acc[count].balance);

    if(acc[count].balance<1500)
    {
        printf("Minimum balance should be Rs.1500.\n");
        return;
    }

    printf("Create user id: ");
    scanf("%s",acc[count].userID);

    printf("Create password: ");
    scanf("%s",acc[count].password);

    printf("Enter email address: ");
    scanf("%s",acc[count].email);

    printf("Enter phone number: ");
    scanf("%s",acc[count].phone);

    acc[count].loanAmount=0;
    acc[count].loanStatus=0;
    acc[count].isActive=1;
    acc[count].t=0;

    count++;

    save();

    printf("Account created successfully.\n");
}