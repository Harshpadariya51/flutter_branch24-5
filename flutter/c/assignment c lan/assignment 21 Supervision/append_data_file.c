/*4. C program to append data into a file :*/

#include <stdio.h>
#include <string.h>

void main()
{
    FILE *fp;
    char hello[50];

    fp = fopen("hello.txt", "a");

    if (fp == NULL)
    {
        printf("File Not Found\n");
    }

    printf("Enter data to append : ");
    fgets(hello, sizeof(hello), stdin);

    fprintf(fp, "%s", hello);

    fclose(fp);

    printf("Data append.\n");
}
