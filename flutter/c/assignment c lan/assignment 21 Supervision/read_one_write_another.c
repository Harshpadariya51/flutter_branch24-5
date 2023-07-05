/*1. WAP to read content from one file & write it to another file*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *sf, *df;
    char ch;

    sf = fopen("one.txt", "r");
    if (sf == NULL)
    {
        printf("\n File Not Founded... \n");
    }

    df = fopen("two.txt", "w");
    if (df == NULL)
    {
        printf("\nFile Not Founded....\n");
        fclose(sf);
    }

    while ((ch = fgetc(sf)) != EOF)
    {
        fputc(ch, df);
    }

    fclose(sf);
    fclose(df);

    printf("read content from one file & write it to another file.\n");

}
