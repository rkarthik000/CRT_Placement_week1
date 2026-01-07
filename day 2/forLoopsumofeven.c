// write a program to print sum of even numbers

#include <stdio.h>
int main() {
    int n, i, sum =0;

    printf("enter the value of N: ");
    scanf("%d", &n);

    for(i = 2; i<=n; i+= 2) {
        sum = sum + i;
    }

    printf("sum of even numbers from 1 to %d = %d", n, sum);

    return 0;
}