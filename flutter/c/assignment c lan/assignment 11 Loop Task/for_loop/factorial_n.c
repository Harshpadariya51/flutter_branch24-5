/* 9. WAP to calculate the factorial of N. using for loop. */

#include <stdio.h>

void main()
{
    int n, fact = 1, i;

    printf("\n Enter a number : ");
    scanf("%d", &n);

    printf("\n find Factorial  : %d\n", n);

    for (int i = 1; i <= n; ++i)
    {
        printf("\n%d = %d * %d\n", fact * i, fact, i);
        fact *= i;
    }
    printf("\n Factorial is : %d\n", fact);
}
