/* wap to find min. from given 2 no. using if else. */

#include <stdio.h>

void main()
{
    int x,y;

    printf("\nEnter the Value of x : ");
    scanf("%d", &x);
    printf("\nEnter the Value of y : ");
    scanf("%d", &y);

    if(x < y)
    {
        printf("%d : x is Min value",x);
    }
    else
    {
        printf("%d : y is Min value",y);
    }

}