/*1-WAP to find average of 1D array*/
#include<stdio.h>
void main()
{
    int i,s;
   
    printf("enter the size of array : ");
    scanf("%d",&s);

    int arr[s];
    float average, sum = 0;

    printf("\n enter the value of array : \n");

    for(i=0; i < s; i++)
    {
        printf("index : %d : ",i);
        scanf("%d",&arr[i]);
        sum +=arr[i];   //sum =sum+arr[i];
    }
    printf("sum of index of value is : %.2f \n",sum);
    average = sum / s;
    printf("the average of the array is : %.2f\n",average);
}
