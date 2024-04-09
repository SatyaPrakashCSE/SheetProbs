#include <stdio.h>

#define N 3

int isUpperTriangular(int matrix[][N]) {
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int isLowerTriangular(int matrix[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (matrix[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int matrix[N][N];

    printf("Enter the elements of the matrix (%d x %d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isUpperTriangular(matrix)) {
        printf("The given matrix is an upper triangular matrix.\n");
    } else if (isLowerTriangular(matrix)) {
        printf("The given matrix is a lower triangular matrix.\n");
    } else {
        printf("The given matrix is not a triangular matrix.\n");
    }

    return 0;
}
