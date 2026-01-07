// write a program to print sum of N natural numbers

#include <stdio.h> 
int main() {
    int n, i, sum = 0;

    printf("enter the value of N: ");
    scanf("%d",&n);

    for (i = 1; i<=n; i++) {
        sum = sum + i;
    }

    printf("sum of first %d natural numbers = %d", n, sum);

    return 0;
}