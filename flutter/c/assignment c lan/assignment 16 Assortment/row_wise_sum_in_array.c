/*4-WAP to perform row-wise sum of 2D array.*/
#include <stdio.h>

void main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array[rows][columns];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Row-wise sums:\n");
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < columns; j++) {
            sum += array[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
}
