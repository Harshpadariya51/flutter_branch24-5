/*3. C program to reverse an array using pointers*/
#include<stdio.h>
void main ()
{
    int a[5],h,*r;

    for (h = 0; h < 5; h++)
    {
        scanf("%d",&a[h]); 
    }
        for (h = 0; h < 5; h++)
    {
        printf("the value of a [%d]is %d\n",h,a[h]); 
    }
        r=&a[5-1];
        for (h = 0; h < 5; h++)
    {
        printf(" %d\n",*r--);
    }
}
