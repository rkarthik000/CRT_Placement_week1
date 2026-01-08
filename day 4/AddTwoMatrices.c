// write a program to add two matricea

#include<stdio.h>

int main() {
    int a[100][100], b[100][100], sum[100][100];
    int row, col;

    printf("enter number of rows: ");
    scanf("%d", &row);

    printf("enter number of columns: ");
    scanf("%d", &col);

    printf("enter elemets of first matrix:\n");
    for(int i=0;i<row;i++) {
        for(int j = 0;j<col;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter elements of second matrix:\n");
    for(int i = 0; i<row; i++) {
        for(int j =0; j<col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i<row; i++) {
        for(int j = 0;j<col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("sum of the two matrices:\n");
    for(int i =0; i<row; i++) {
        for(int j = 0; j<col;j++) {
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}