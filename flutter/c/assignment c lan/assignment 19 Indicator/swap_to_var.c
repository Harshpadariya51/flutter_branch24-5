/* 1. C program to swap two numbers using pointers*/
#include<stdio.h>
int swap(int *, int *);
void main()
{
    int a,b;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the new value of a = %d\n",a);
    printf("the new value of b = %d\n",b);
    
}
int swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}