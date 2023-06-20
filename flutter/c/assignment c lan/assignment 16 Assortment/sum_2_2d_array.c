/*3-WAP to find perform addition of two 2D array & store it into another.*/
#include <stdio.h>

void main()
{
    int size1, size2;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size1);
    printf("Enter the size of the arrays: ");
    scanf("%d", &size2);

    int array1[size1][size2], array2[size1][size2], result[size1][size2];

    printf("Enter the elements of the first array: \n");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the elements of the second array: \n");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    // Perform addition of the arrays
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
        }
        printf("\n");
    }

    printf("Resultant array after addition: \n");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("%d ", result[i][j]);
        }
    }
}
