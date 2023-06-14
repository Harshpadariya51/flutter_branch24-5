/* Write C program use switch statement. Display Monday to Sunday.
Ex. User input : M
Output: Monday */

#include <stdio.h>

void main()
{
    char day;

    printf("Enter a day of the week (M/T/W/H/F/S/U): ");
    scanf("%c", &day);

    switch (day)
    {
        case 'M':
        case 'm':
            printf("%c : Monday\n",day);
            break;
        case 'T':
        case 't':
            printf("%c : Tuesday\n",day);
            break;
        case 'W':
        case 'w':
            printf("%c : Wednesday\n",day);
            break;
        case 'H':
        case 'h':
            printf("%c : Thursday\n",day);
            break;
        case 'F':
        case 'f':
            printf("%c : Friday\n",day);
            break;
        case 'S':
        case 's':
            printf("%c : Saturday\n",day);
            break;
        case 'U':
        case 'u':
            printf("%c : Sunday\n",day);
            break;
        default:
            printf("Invalid day\n");
    }
}