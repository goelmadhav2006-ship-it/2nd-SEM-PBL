#include<stdio.h>
#include<string.h>
#include "data.h"

void depositMoney(int i);
void withdrawMoney(int i);
void transferMoney(int i);
void applyLoan(int i);
void checkLoan(int i);

void customerMenu()
{
    char id[20],pass[20];
    int i,flag=0,ch;

    printf("\n========== CUSTOMER LOGIN ==========\n");

    printf("Enter user id: ");
    scanf("%s",id);

    printf("Enter password: ");
    scanf("%s",pass);

    for(i=0;i<count;i++)
    {
        if(strcmp(acc[i].userID,id)==0 &&
           strcmp(acc[i].password,pass)==0 &&
           acc[i].isActive==1)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Invalid login credentials or account is frozen.\n");
        return;
    }

    while(1)
    {
        printf("\n========== CUSTOMER MENU ==========\n");
        printf("1. View Account Details\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Transfer Money\n");
        printf("5. Apply for Loan\n");
        printf("6. Check Loan Status\n");
        printf("7. Logout\n");
        printf("Enter choice: ");

        scanf("%d",&ch);

        if(ch==1)
        {
            printf("\nAccount Number : %d\n",acc[i].accNo);
            printf("Name           : %s\n",acc[i].name);
            printf("Balance        : %.2f\n",acc[i].balance);
            printf("Email          : %s\n",acc[i].email);
            printf("Phone          : %s\n",acc[i].phone);
        }

        else if(ch==2)
        {
            depositMoney(i);
        }

        else if(ch==3)
        {
            withdrawMoney(i);
        }

        else if(ch==4)
        {
            transferMoney(i);
        }

        else if(ch==5)
        {
            applyLoan(i);
        }

        else if(ch==6)
        {
            checkLoan(i);
        }

        else if(ch==7)
        {
            printf("Customer logged out successfully.\n");
            break;
        }

        else
        {
            printf("Invalid choice.\n");
        }
    }
}