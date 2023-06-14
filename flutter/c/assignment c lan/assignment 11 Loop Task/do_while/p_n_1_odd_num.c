/* 5. WAP to print odd no. from 1 to N using do while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\n Enter value of n : ");
    scanf("%d", &n);

    printf("\n Odd numbers from 1 to %d : \n", n);

    do
    {
        if (i % 2 != 0)
        {
            printf(" %d ", i);
        }
        i++;
    }while (i <= n);
}
