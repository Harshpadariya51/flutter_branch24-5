/* 2 - wap to print grade using switch statement */

#include <stdio.h>

void main()
{
    int m;

    printf("\n Enter the marks (0-100) : ");
    scanf("%d", &m);

    int grade = m / 10;

    switch (grade)
    {
        case 10:
        case 9:
            printf("\nGrade: A\n");
            break;
        case 8:
            printf("\nGrade: B\n");
            break;
        case 7:
            printf("\nGrade: C\n");
            break;
        case 6:
            printf("\nGrade: D\n");
            break;
        case 5:
        case 4:
            printf("\nGrade: E\n");
            break;
        case 3:
        case 2:
        case 1:
        case 0:
            printf("\nGrade: F\n");
            break;
        default:
            printf("\npls enter (1 to 100) only.....\n");
            break;
    }
}