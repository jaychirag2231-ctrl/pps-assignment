#include <stdio.h>

int main() {
    int rows, cols;
    int matrix1[10][10], matrix2[10][10], sum[10][10];

    // 1. Get the dimensions of the matrices
    printf("Enter the number of rows (1 to 10): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (1 to 10): ");
    scanf("%d", &cols);

    // 2. Input elements for the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // 3. Input elements for the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // 4. Add the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // 5. Display the result
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}