/*1. C program to find factorial of number using recursion.*/
#include<stdio.h>
int factorial(int a);
void main()
{
    int number, fact;

    printf("\n enter number :");
    scanf("%d", &number);

    fact = factorial(number);

    printf("factorial of %d = %d\n",number,fact);

}
int factorial(int a)
{
    int total;
    if (a == 0 || a == 1)
    {
        return(1);
    }
    else
    {
        total = a * factorial(a - 1);
    }
    return total;
}