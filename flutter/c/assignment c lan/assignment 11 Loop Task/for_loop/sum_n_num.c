/* 8. WAP to print sum 1 to N using for loop. */

#include <stdio.h>

void main()
{
    int i, n, answer = 0;

    printf("\n Enter a Number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n%d = %d + %d ", answer + i, answer, i);
        answer += i;
    }
    printf("\n Sum is : %d", answer);
}