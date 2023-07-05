/*5. C program to copy contents from one file to another */

#include <stdio.h>

void main()
{
    FILE *hr, *rh;
    char ch;

    hr = fopen("one.txt", "r");
    if (hr == NULL)
    {
        printf("file not found\n");
    }

    rh = fopen("second.txt", "w");
    if (rh == NULL)
    {
        printf("File Not found \n");
        fclose(hr);
    }

    while ((ch = fgetc(hr)) != EOF)
    {
        fputc(ch, rh);
    }

    fclose(hr);
    fclose(rh);

    printf("copy contents from one file to another\n");
}
