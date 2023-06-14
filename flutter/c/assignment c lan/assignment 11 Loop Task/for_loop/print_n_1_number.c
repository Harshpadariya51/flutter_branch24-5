/* 4. WAP to print N to 1 using for loop. */

#include <stdio.h>

void main()
{
    int i, n;

    printf("\n Enter  a Number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; n--)
    {
        printf("%d\n", n);
    }
}