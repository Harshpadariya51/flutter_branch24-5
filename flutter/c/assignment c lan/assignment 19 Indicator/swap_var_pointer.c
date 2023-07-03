/*6.WAP to swap two variables using Pointer.*/
#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;

    printf("\n enter 1st value : ");
    scanf("%d",&a);
    printf("\n enter 2nd value : ");
    scanf("%d",&b);

    printf("\n 1st value a = %d",a);
    printf("\n 2nd value b = %d",b);

    swap(&a,&b);

    printf("\n 1st value a = %d",a);
    printf("\n 2nd value b = %d",b);
}
void swap (int *a,int *b)
{
    int h;
    h=*a;
    *a=*b;
    *b=h;
}