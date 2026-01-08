// write a program to replace negative values with zero

#include<stdio.h>
int main () {
    int n, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(int i= 0; i<n; i++ ) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++) {
        if(arr[i]<0) {
            arr[i] = 0;
        }
    }

    printf("array after replacing negative values with zero: \n");

    for (int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}