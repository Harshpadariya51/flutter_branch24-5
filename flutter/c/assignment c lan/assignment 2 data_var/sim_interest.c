/*wap to simple interest..*/
#include<stdio.h>
void main()
{
	float a,b,c,DE;

	printf("\n calculat simple interest : \n");
	printf("enter amount : ");
	scanf("%f",&a);
	printf("\n enetr rate : ");
	scanf("%f",&b);
	printf("enter time :");
	scanf("%f",&c);

	DE = (a*b*c)/100;

	printf("\n\n simple interest : %f",DE);
}