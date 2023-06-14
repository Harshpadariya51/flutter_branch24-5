/* 9. WAP to calculate the factorial of N. using do while loop. */

#include <stdio.h>

void main()
{
    int n, fact = 1;

    printf("\n Enter a number : ");
    scanf("%d", &n);

    printf("\n find Factorial  : %d\n", n);

    if (n < 0)
    {
        printf("\n Enter Valid Number..\n");
    }
    else
    {
        do
        {
            printf("\n%d = %d * %d\n", fact * n, fact, n);
            fact *= n;
            n--;
        } while (n > 0);

        printf("\n Factorial is = %d\n", fact);
    }
}
