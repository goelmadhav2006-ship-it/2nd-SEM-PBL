#include<stdio.h>
#include "data.h"

void applyLoan(int i)
{
    float amt;

    printf("\n========== APPLY FOR LOAN ==========\n");

    printf("Enter loan amount: ");
    scanf("%f",&amt);

    acc[i].loanAmount=amt;
    acc[i].loanStatus=2;

    save();

    printf("Loan request submitted successfully.\n");
}

void checkLoan(int i)
{
    printf("\n========== LOAN STATUS ==========\n");

    if(acc[i].loanStatus==0)
    {
        printf("No active loan request found.\n");
    }

    else if(acc[i].loanStatus==2)
    {
        printf("Loan request is currently pending approval.\n");
    }

    else if(acc[i].loanStatus==1)
    {
        printf("Loan Approved Successfully.\n");
        printf("Approved Amount : %.2f\n",acc[i].loanAmount);
        printf("Repayment Amount With Interest : %.2f\n",
        acc[i].loanAmount*1.1);
    }

    else
    {
        printf("Loan request has been rejected.\n");
    }
}

void processLoans()
{
    int i,ch;

    printf("\n========== PROCESS LOAN REQUESTS ==========\n");

    for(i=0;i<count;i++)
    {
        if(acc[i].loanStatus==2)
        {
            printf("\nAccount Number : %d\n",acc[i].accNo);
            printf("Customer Name  : %s\n",acc[i].name);
            printf("Loan Amount    : %.2f\n",acc[i].loanAmount);

            printf("\n1. Approve Loan\n");
            printf("2. Reject Loan\n");
            printf("Enter choice: ");

            scanf("%d",&ch);

            if(ch==1)
            {
                acc[i].loanStatus=1;
                acc[i].balance =
                acc[i].balance + acc[i].loanAmount;

                printf("Loan approved successfully.\n");
            }

            else
            {
                acc[i].loanStatus=-1;

                printf("Loan request rejected.\n");
            }

            save();
        }
    }
}