/* 10. WAP to print the multiplication table of N using for loop. */

#include <stdio.h>

void main()
{
    int i, n;

    printf("\n Enter a number : ");
    scanf("%d", &n);

    printf("\n Multiplication Table of %d : \n", n);

    for (i = 1; i <= 10; i++)
    {
        printf("\t%d x %d = %d\n", n, i, n * i);
    }
}
