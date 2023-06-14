/* 8. WAP to print sum 1 to N using while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n, answer = 0;

    printf("\nEnter a Number : ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n%d = %d + %d ", answer + i, answer, i);
        answer += i;
        i++;
    }
    printf("\nSum is : %d", answer);
}