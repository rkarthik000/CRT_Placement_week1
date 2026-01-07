// write a program to print factorial of a given number

#include <stdio.h>
int main () {
    int n, i;
    long long int fact = 1;

    printf("enter a number: ");
    scanf("%d", &n);

    for(i = 1; i<= n; i++) {
        fact = fact * i;
    }

    printf("factorial of %d = % lld", n, fact);

    return 0;
}