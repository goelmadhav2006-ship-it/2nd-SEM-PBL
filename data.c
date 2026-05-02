#include<stdio.h>
#include "data.h"

struct Account acc[100];
int count=0;

void save()
{
    FILE *fp;
    int i,j;

    fp=fopen("bank.txt","w");

    if(fp==NULL)
    {
        printf("\nUnable to access storage file.\n");
        return;
    }

    fprintf(fp,"%d\n",count);

    for(i=0;i<count;i++)
    {
        fprintf(fp,"%d %s %f %s %s %s %s %f %d %d %d\n",
        acc[i].accNo,
        acc[i].name,
        acc[i].balance,
        acc[i].userID,
        acc[i].password,
        acc[i].email,
        acc[i].phone,
        acc[i].loanAmount,
        acc[i].loanStatus,
        acc[i].isActive,
        acc[i].t);

        for(j=0;j<acc[i].t;j++)
        {
            fprintf(fp,"%f ",acc[i].trans[j]);
        }

        fprintf(fp,"\n");
    }

    fclose(fp);
}

void load()
{
    FILE *fp;
    int i,j;

    fp=fopen("bank.txt","r");

    if(fp==NULL)
    {
        printf("\nNo previous records found. Starting fresh.\n");
        return;
    }

    fscanf(fp,"%d",&count);

    for(i=0;i<count;i++)
    {
        fscanf(fp,"%d %s %f %s %s %s %s %f %d %d %d",
        &acc[i].accNo,
        acc[i].name,
        &acc[i].balance,
        acc[i].userID,
        acc[i].password,
        acc[i].email,
        acc[i].phone,
        &acc[i].loanAmount,
        &acc[i].loanStatus,
        &acc[i].isActive,
        &acc[i].t);

        for(j=0;j<acc[i].t;j++)
        {
            fscanf(fp,"%f",&acc[i].trans[j]);
        }
    }

    fclose(fp);

    printf("\nCustomer records loaded successfully.\n");
}