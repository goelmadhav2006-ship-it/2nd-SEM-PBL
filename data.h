#include<stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;

    char userID[20];
    char password[20];

    char email[50];
    char phone[15];

    float loanAmount;
    int loanStatus;
    int isActive;

    float trans[5];
    int t;
};

extern struct Account acc[100];
extern int count;

void save();
void load();