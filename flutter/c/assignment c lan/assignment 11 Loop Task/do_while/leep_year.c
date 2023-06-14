/* 7. WAP to Find leap year from 2000 to 3000 using do while loop. */

#include <stdio.h>

void main()
{
    int year = 2000;

    printf("\n Leap years from 2000 to 3000 : \n");

    do
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            printf("%d\n", year);
        }
        year++;
    }while (year <= 3000);
    
}
