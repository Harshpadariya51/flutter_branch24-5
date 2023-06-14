/*wap to find area of rectangle*/
#include<stdio.h>
void main()
{
	int p,h,area;

	printf("\n enter heigth rectangle : ");
	scanf("%d",&p);
	printf("\n enter width rectangle : ");
	scanf("%d",&h);

	area = p * h;

	printf("area of the rectangle : %d\n",area);
}