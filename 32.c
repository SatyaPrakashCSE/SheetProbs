#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to check if a matrix is lower triangular
int isLowerTriangular(int *matrix, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < cols; j++) {
            if (*(matrix + i * cols + j) != 0) {
                return 0; // Not lower triangular
            }
        }
    }
    return 1; // Lower triangular
}

// Function to check if a matrix is upper triangular
int isUpperTriangular(int *matrix, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < i; j++) {
            if (*(matrix + i * cols + j) != 0) {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // Upper triangular
}

// Function to display the matrix
void displayMatrix(int *matrix, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {{1, 0, 0}, {2, 3, 0}, {4, 5, 6}};

    printf("Given Matrix:\n");
    displayMatrix((int *)matrix, ROWS, COLS);

    if (isLowerTriangular((int *)matrix, ROWS, COLS)) {
        printf("\nThe given matrix is lower triangular.\n");
    } else if (isUpperTriangular((int *)matrix, ROWS, COLS)) {
        printf("\nThe given matrix is upper triangular.\n");
    } else {
        printf("\nThe given matrix is neither upper triangular nor lower triangular.\n");
    }

    return 0;
}
