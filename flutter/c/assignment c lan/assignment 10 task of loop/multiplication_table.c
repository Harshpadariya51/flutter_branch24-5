/* 10. WAP to print the multiplication table of N using while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter number : ");
    scanf("%d", &n);

    printf("\n Multiplication Table of %d : \n", n);

    while (i <= 10)
    {
        printf("\t %d x %d = %d\n", n, i, n * i);
        i++;
    }
}