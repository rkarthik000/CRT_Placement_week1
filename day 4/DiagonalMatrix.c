// write a program to print diagonal elements in NxN matrix

#include <stdio.h>
int main() {
    int n, arr[100][100];

    printf("Enter the size of the matrix (N): ");
    scanf("%d", &n);

    printf("enter the matrix elements:\n");
    for(int i = 0;i<n;i++) {
        for (int j = 0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("diagonal elements are:\n");

    for (int i=0;i<n;i++) {
        printf("%d ",arr[i][i]);
    }

    return 0;
}