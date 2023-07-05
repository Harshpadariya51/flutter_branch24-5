/*2. C program to read a file and display its contents */

#include<stdio.h>
#include<string.h>

void main()
{
    FILE *rp;
    char mgs[50];

    rp = fopen("one.txt","r");
    if(rp==NULL)
    {
        printf("\nFile Is Not Founded....\n");
    }
    else
    {
        printf("\n File Founded.... \n");
    }

    fgets(mgs,50,rp);
    fclose(rp);

    printf("%s",mgs);

}