/* 6. WAP to print even no. from N to 1 using for loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\n Enter value of n : ");
    scanf("%d", &n);

    printf("\n Even numbers from 1 to %d : \n", n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
    }
}
