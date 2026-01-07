/// write a program to calculate sum of elements in an array

#include <stdio.h>
int main() {
    int arr[100];

    int size;
    printf("enter the size: ");
    scanf("%d", &size);

    for(int i=0; i<size; i++) {
        printf("enter the element at position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int evenSum = 0;
    int oddSum = 0;
    for(int i = 0; i<size; i++) {
        if(arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

}