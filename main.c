#include<stdio.h>
#include "data.h"

void adminMenu();
void customerMenu();

int main()
{
    int ch;

    load();

    while(1)
    {
        printf("\n========== BANK MANAGEMENT SYSTEM ==========\n");
        printf("1. Admin Login\n");
        printf("2. Customer Login\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        if(ch==1)
        {
            adminMenu();
        }

        else if(ch==2)
        {
            customerMenu();
        }

        else if(ch==3)
        {
            save();
            printf("Thank you for using the system.\n");
            break;
        }

        else
        {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}