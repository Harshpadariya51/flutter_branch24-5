/*wap to swap two variables (with sing third variable)*/
#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("\nEnter a value : ");
	scanf("%d",&a);
	printf("\nEnter b value : ");
	scanf("%d",&b);

	

	c=a;
	a=b;
	b=c;


	printf("\nafter swap : a : %d \t b : %d\n",a,b);

}