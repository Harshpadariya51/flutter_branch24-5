/* 6. WAP to print even no. from N to 1 using do while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter value of n : ");
    scanf("%d", &n);

    printf("\nEven numbers from 1 %d : \n", n);

    do
    {
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
        i++;
    }while (i <= n);
}
