/*wap to perform logical operators*/
#include<stdio.h>
void main ()
{
	int a,b,c;
	printf("enetr the value of a=");
	scanf("%d",&a);
	printf("enetr the value of b=");
	scanf("%d",&b);
	printf("enetr the value of c");
	scanf("%d",&c);

	printf("%d\n",a>b && a>c);
	printf("%d\n",b>a && b>c);
	printf("%d\n",c>a && c>b);

	printf("%d\n",a>b || a>c);

	printf("%d\n",a!=b);
}