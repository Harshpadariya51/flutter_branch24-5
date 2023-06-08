/* 3-wap to perform various arithmatic task using swith statement */

#include<stdio.h>

void main()
{
    int h,p;
    char symbol;

    printf("\nEnter value of h : ");
    scanf("%d",&h);
    printf("\nEnter Value of p : ");
    scanf("%d",&p);

    printf("\nEnter Your choice symbol (+,-,*,/,%%) : ");
    scanf(" %c",&symbol);
    
    switch (symbol)
    {
        case '+' :
            printf("h + p Ans is : %d",h+p);
            break;
    
        case '-' :
            printf("h - p Ans is : %d",h-p);
            break;

        case '*' :
            printf("h * p Ans is : %d",h*p);
            break;    

        case '/' :
            printf("h / p Ans is : %d",h/p);
            break;

        case '%' :
            printf("h %% p Ans is : %d",h%p);
            break;
        
        default:
            printf("My dear friend,\n\tpls try agine...");
            break;
    }



}