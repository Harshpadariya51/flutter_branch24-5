/*1.WAP to find a the answer given formula (x+y)2.*/
#include<stdio.h>
void main()
{
	int r,p,ans;

	printf("\n1.wap to find the ans given for.. (x+y)2 :\n");

	printf("enter value x :");
	scanf("%d",&r);
	printf("enter value y :");
	scanf("%d",&p);

	ans = (r+p) * (r+p);

	printf("\nans is : %d\n",ans);
	
}