#include<stdio.h>
#include "data.h"

void updateAccount()
{
    int num,i,ch,flag=0;

    printf("\n========== UPDATE ACCOUNT ==========\n");

    printf("Enter account number: ");
    scanf("%d",&num);

    for(i=0;i<count;i++)
    {
        if(acc[i].accNo==num)
        {
            flag=1;

            printf("\n1. Update Name\n");
            printf("2. Update Email\n");
            printf("3. Update Phone Number\n");
            printf("Enter choice: ");

            scanf("%d",&ch);

            if(ch==1)
            {
                printf("Enter new name: ");
                scanf(" %[^\n]",acc[i].name);
            }

            else if(ch==2)
            {
                printf("Enter new email: ");
                scanf("%s",acc[i].email);
            }

            else if(ch==3)
            {
                printf("Enter new phone number: ");
                scanf("%s",acc[i].phone);
            }

            else
            {
                printf("Invalid option selected.\n");
                return;
            }

            save();

            printf("Account details updated successfully.\n");
        }
    }

    if(flag==0)
    {
        printf("Account not found.\n");
    }
}