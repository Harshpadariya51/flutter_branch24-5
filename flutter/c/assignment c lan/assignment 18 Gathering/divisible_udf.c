/*2.WAP to find if a given nunmber is divisible by 3 & 5 both or not using UDF :*/

#include <stdio.h>
int divisible(int a);

void main()
{
    int num;
    printf("divisible or not by both 3 and 5.");
    printf("\n Enter a number : ");
    scanf("%d", &num);

    if (divisible(num))
    {
        printf("\n %d -> is divisible \n ", num);
    }
    else
    {
        printf("\n %d -> is not divisible \n ", num);
    }
}

int divisible(int a)
{
    if (a % 3 == 0 && a % 5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}