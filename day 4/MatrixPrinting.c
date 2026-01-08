// write a program to print all the elements in a matrix

#include <stdio.h>
int main() {
    int arr[100] [100];
    int row, col;

    printf("enter the number of rows: ");
    scanf("%d",&row);

    printf("enter the number of cols: ");
    scanf("%d", &col);

    for (int i = 0; i<row; i++) {
        for (int j=0; j<col;j++) {
            printf("Enter the elements at position (%d, %d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix elements are:\n");

    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}