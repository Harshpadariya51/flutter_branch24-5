/*5.WAP to find square of each element using Pointer.*/
#include<stdio.h>
void main()
{
    int a[5],*h,r;

    for (r = 0; r < 5; r++)
    {
        printf("a[%d] : ",a[r]);
        scanf("%d",&a[r]);
    }
    for (r = 0; r < 5; r++)
    {
        printf("\n a[%d] : %d",r, a[r]);
    }
    square(a);

    printf("\n square : \n ");
    for (r = 0; r < 5; r++)
    {
        printf("\n a[%d] : %d",r,*(a + r));
    }
}
void square(int *a)
{
    int r;
    for (r = 0; r < 5; r++)
    {
        *(a + r) =*(a + r)**(a + r);
    }
}
