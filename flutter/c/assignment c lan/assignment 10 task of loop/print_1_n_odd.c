/* 5. WAP to print odd no. from 1 to N using while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter value of n : ");
    scanf("%d", &n);

    printf("\nOdd numbers from 1 to %d : \n", n);

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf(" %d ", i);
        }
        i++;
    }
}