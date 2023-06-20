/*WAP to find perform addition of two 1D array & store it into another.*/
#include <stdio.h>

void main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], result[size];

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    // Perform addition of the arrays
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
    }

    printf("Resultant array after addition: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

   
}
