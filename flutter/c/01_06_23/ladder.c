/*wap to perform simple with logical operator*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enetr the value of a");
	scanf("%d",&a);
	printf("enetr the value of b");
	scanf("%d",&b);
	printf("enetr the value of c");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
	printf("a is bigger..");
    }
	{
	else if(b>c)
		printf("b is bigger..");
    }
}