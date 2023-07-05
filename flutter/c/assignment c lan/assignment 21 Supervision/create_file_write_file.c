/* 1. C program to create a file and write data into file */

#include<stdio.h>
#include<string.h>

void main()
{
    FILE *hr;
    char mgs1[50]="create a file and write data into file ";

    hr=fopen("one.txt","w");

    if(hr==NULL)
    {
        printf("File Not Founded\n");
    }
    else
    {
        printf("File Created / Founded\n");
    }

    if(strlen(mgs1)>0)
    {
        fputs(mgs1,hr);
    }
    printf("File Updated\n");
    fclose(hr);
}