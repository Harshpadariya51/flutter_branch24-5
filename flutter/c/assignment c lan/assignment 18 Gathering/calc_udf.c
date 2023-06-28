/*2.WAP to create infinite calc using UDF, switch case.*/

#include <stdio.h>
void calc(int a, int b, int c);
void main()
{
    int a, b, c;

    printf("\n\n Enter 1st Value : ");
    scanf("%d", &a);
    printf("\n Enter 2nd Value : ");
    scanf("%d", &b);

    printf("\n 1. +,\n 2. -, \n 3. *, \n 4. / \n");
    printf("\n Enter Any One Number : ");
    scanf("%d", &c);

    calc(a, b, c);
}

void calc(int a, int b, int c)
{
    switch (c)
    {
    case 1:
        return printf("\n a + b : %d + %d : %d \n", a, b, a + b);
        break;
    case 2:
        return printf("\n a - b : %d - %d : %d \n", a, b, a - b);
        break;
    case 3:
        return printf("\n a * b : %d * %d : %d \n", a, b, a * b);
        break;
    case 4:
        return printf("\n a / b : %d / %d : %d \n", a, b, a / b);
        break;
    default:
        return printf("\n Enter Valid Choice..\n");
        break;
    }
}