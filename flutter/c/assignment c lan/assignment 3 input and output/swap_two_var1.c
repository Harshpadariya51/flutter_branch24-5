/*wap to swap two variables (without using third variable)*/
#include<stdio.h>
void main()
{
	int a,b;
	
	printf("\nEnter a value : ");
	scanf("%d",&a);
	printf("\nEnter b value : ");
	scanf("%d",&b);

	

	a=a+b;
	b=a-b;
	a=a-b;


	printf("\nafter swap : a : %d \t b : %d\n",a,b);

}