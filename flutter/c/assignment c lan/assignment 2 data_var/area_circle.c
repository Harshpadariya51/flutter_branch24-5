/*wap to find area of circle */
#include<stdio.h>
void main()
{
	float pie = 3.14,area;
	int redius;

	printf(" the redius of circle value :");
	scanf("%d",&redius);
	printf("the redius of the circle is %d\n",redius);

	//pi = 3.14
	//area = pi * (redius)^2 -> foemula of circle...
	area =(pie* redius * redius);
	printf(" answer is %f",area);
}