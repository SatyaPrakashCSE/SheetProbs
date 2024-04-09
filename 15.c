// WAP to find the product of two matrices A and B. Display the source matrix and the product martix C in matrix form.

#include <stdio.h>

int main(){
    int r1,c1,r2,c2,r3,c3, i,j,k;
    printf("Enter the number of rows of First Matrix : ");
    scanf("%d", &r1);
    printf("Enter the number of coloumns of First Matrix : ");
    scanf("%d", &c1);
    printf("Enter the number of rows of Second Matrix : ");
    scanf("%d", &r2);
    printf("Enter the number of coloumns of Second Matrix : ");
    scanf("%d", &c2);
    r3 = r1;
    c3 = c2;
    int m1[r1][c1], m2[r2][c2], c[r3][c3];
    if (c1 == r2){
        for (i = 0; i < r1; i++){
            for (j = 0; j<c1; j++){
                printf("Enter the (%d,%d)th element of first matrix : ", i, j);
                scanf("%d", &m1[i][j]);
            }
        }
        for (i = 0; i < r1; i++){
            for (j = 0; j<c1; j++){
                printf("Enter the (%d,%d)th element of second matrix : ", i, j);
                scanf("%d", &m2[i][j]);
            }
        }
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                c[i][j] = 0;
                for (int k = 0; k < r2; k++) {
                    c[i][j] = c[i][j] +  m1[i][k] * m2[k][j];
                }
            }
        }
        printf("The First matrix is : \n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                printf("%d\t", m1[i][j]);
            }
            printf("\n");
        }
        printf("The Second matrix is : \n");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d\t", m2[i][j]);
            }
            printf("\n");
        }
        printf("The Resultant matrix is : \n");
        for (int i = 0; i < r3; i++) {
            for (int j = 0; j < c3; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrix not multiplicable.");
    return 0;
}