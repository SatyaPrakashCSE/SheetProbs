// WAP to find the transpose of a matrix. Display the source and the transposed matrix in matrix format

#include <stdio.h>

int main(){
    int r,c,temp,i,j;
    printf("Enter the number of rows of Matrix : ");
    scanf("%d", &r);
    printf("Enter the number of coloumns of Matrix : ");
    scanf("%d", &c);
    int m[r][c];
    int trans[c][r];
    for (i = 0; i < r; i++){
        for (j = 0; j<c; j++){
            printf("Enter the (%d,%d)th element of first matrix : ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            trans[j][i] = m[i][j];
        }
    }
    printf("The original matrix is : \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    printf("The transposed matrix is : \n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}