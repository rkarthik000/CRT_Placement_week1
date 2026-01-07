// write a program to check if number is prime or not

#include <stdio.h>

int main() {
    int num;
    printf("Number: ");
    scanf("%d", &num);

    int isPrime = 1;

    if (num< 0) {
        isPrime = 0;
    }

    for(int i = 2; i<num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime) {
        printf("its prime number");
    } else {
        printf("its not prime number");
    }
    return 0;
}