/*1.WAP to find cube of given no using UDF :*/

#include <stdio.h>
int cube(int num);

void main()
{
    int number, h_r;    
    printf("\n Enter a number : ");
    scanf("%d", &number);

    h_r = cube(number);
    printf("Cube of %d is: %d\n", number, h_r);
}
int cube(int num)
{
    int result = num * num * num;
    return result;
}