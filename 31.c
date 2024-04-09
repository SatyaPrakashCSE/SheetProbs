#include <stdio.h>

#define ROWS_A 2
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 2

void matrixProduct(int *A, int *B, int *C) {
    int i, j, k;
    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_B; j++) {
            *(C + i * COLS_B + j) = 0;
            for (k = 0; k < COLS_A; k++) {
                *(C + i * COLS_B + j) += *(A + i * COLS_A + k) * *(B + k * COLS_B + j);
            }
        }
    }
}

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
    int A[ROWS_A][COLS_A] = {{1, 2, 3}, {4, 5, 6}};
    int B[ROWS_B][COLS_B] = {{7, 8}, {9, 10}, {11, 12}};
    int C[ROWS_A][COLS_B];

    printf("Matrix A:\n");
    displayMatrix((int *)A, ROWS_A, COLS_A);

    printf("\nMatrix B:\n");
    displayMatrix((int *)B, ROWS_B, COLS_B);

    matrixProduct((int *)A, (int *)B, (int *)C);

    printf("\nProduct Matrix C:\n");
    displayMatrix((int *)C, ROWS_A, COLS_B);

    return 0;
}
