/* 1. Write C program to input any character and check whether it is alphabet, digit or special character. */

#include <stdio.h>

void main()
{
    char ap;

    printf("Enter any character: ");
    scanf("%c", &ap);

    if ((ap >= 'a' && ap <= 'z') || (ap >= 'A' && ap <= 'Z'))
    {
        printf("The character is an alphabet : %c.\n", ap);
    }
    else if (ap >= '0' && ap <= '9')
    {
        printf("The character is a digit : %c.\n", ap);
    }
    else
    {
        printf("The character is a special character : %c.\n", ap);
    }
}