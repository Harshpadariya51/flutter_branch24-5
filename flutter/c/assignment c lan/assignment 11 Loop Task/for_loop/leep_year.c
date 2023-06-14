/* 7. WAP to Find leap year from 2000 to 3000 using for loop. */

#include <stdio.h>

void main()
{
    int year;

    printf("\n Leap years from 2000 to 3000 : \n");

    for (year = 2000; year <= 3000; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            printf("%d\n", year);
        }
    }
}
