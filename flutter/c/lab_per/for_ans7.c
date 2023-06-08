/*7.WAP to find a the answer given formula (x+y+z)2.*/
#include<stdio.h>
void main()
{
	int r,p,h,ans;

	printf("\n1.wap to find the ans given for.. (x+y+z)2 :\n");

	printf("enter value x :");
	scanf("%d",&r);
	printf("enter value y :");
	scanf("%d",&p);
	printf("enter value z :");
	scanf("%d",&h);

	ans = (r-p-h) * (r-p-h);

	printf("\nans is : %d\n",ans);
	
}
