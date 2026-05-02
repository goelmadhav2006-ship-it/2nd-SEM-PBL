#include<stdio.h>
#include<string.h>
#include "data.h"

void createAccount();
void showAll();
void deleteAccount();
void updateAccount();
void searchAccount();
void totalBalance();
void processLoans();

void adminMenu()
{
    char id[20],pass[20];

    printf("\n========== ADMIN LOGIN ==========\n");

    printf("Enter admin id: ");
    scanf("%s",id);

    printf("Enter password: ");
    scanf("%s",pass);

    if(strcmp(id,"admin")!=0 || strcmp(pass,"1234")!=0)
    {
        printf("Invalid admin credentials.\n");
        return;
    }

    int ch;

    while(1)
    {
        printf("\n========== ADMIN MENU ==========\n");
        printf("1. Create Account\n");
        printf("2. View All Accounts\n");
        printf("3. Delete Account\n");
        printf("4. Update Account Details\n");
        printf("5. Search Account\n");
        printf("6. View Total Bank Balance\n");
        printf("7. Process Loan Requests\n");
        printf("8. Freeze Account\n");
        printf("9. Unfreeze Account\n");
        printf("10. Add Interest\n");
        printf("11. Logout\n");
        printf("Enter choice: ");

        scanf("%d",&ch);

        if(ch==1)
        {
            createAccount();
        }

        else if(ch==2)
        {
            showAll();
        }

        else if(ch==3)
        {
            deleteAccount();
        }

        else if(ch==4)
        {
            updateAccount();
        }

        else if(ch==5)
        {
            searchAccount();
        }

        else if(ch==6)
        {
            totalBalance();
        }

        else if(ch==7)
        {
            processLoans();
        }

        else if(ch==8)
        {
            int num,i,flag=0;

            printf("Enter account number: ");
            scanf("%d",&num);

            for(i=0;i<count;i++)
            {
                if(acc[i].accNo==num)
                {
                    acc[i].isActive=0;
                    flag=1;
                }
            }

            if(flag==1)
            {
                save();
                printf("Account has been frozen successfully.\n");
            }

            else
            {
                printf("Account not found.\n");
            }
        }

        else if(ch==9)
        {
            int num,i,flag=0;

            printf("Enter account number: ");
            scanf("%d",&num);

            for(i=0;i<count;i++)
            {
                if(acc[i].accNo==num)
                {
                    acc[i].isActive=1;
                    flag=1;
                }
            }

            if(flag==1)
            {
                save();
                printf("Account has been reactivated successfully.\n");
            }

            else
            {
                printf("Account not found.\n");
            }
        }

        else if(ch==10)
        {
            int i;

            for(i=0;i<count;i++)
            {
                acc[i].balance =
                acc[i].balance + (acc[i].balance*0.05);
            }

            save();

            printf("Interest added successfully.\n");
        }

        else if(ch==11)
        {
            printf("Admin logged out successfully.\n");
            break;
        }

        else
        {
            printf("Invalid choice.\n");
        }
    }
}