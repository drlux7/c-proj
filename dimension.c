#include <stdio.h>

int main() {
    // Define the dimensions of the 2D arrays
    int rows = 3;
    int cols = 3;

    // Initialize two 2D arrays
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Result array to store the sum of array1 and array2
    int result[3][3];

    // Sum the two arrays
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Display the result
    printf("Sum of the two arrays:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
