/*7-WAP to perform anti-diagonal sum of 2D array.*/
#include <stdio.h>

void main()
{
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int array[size][size];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i][i];
    }

    printf("Diagonal sum: %d\n", sum);

}
