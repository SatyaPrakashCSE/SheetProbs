//WAP to display the row sum and coloumn sum of an input 2 dimensional matrix. Display the source matrix with row and coloumn sum

#include <stdio.h>

int main(){
    int r,c,i,j,sum,row,col;
    printf("Enter the number of rows of Matrix : ");
    scanf("%d", &r);
    printf("Enter the number of coloumns of Matrix : ");
    scanf("%d", &c);
    int m[r][c];
    sum = 0;
    printf("Enetr the row you want to find sum of : ");
    scanf("%d", &row);
    for (j = 0; j< c; j++){
        sum = sum + m[row][j];
    }
    printf("The row sum is %d\n", sum);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}