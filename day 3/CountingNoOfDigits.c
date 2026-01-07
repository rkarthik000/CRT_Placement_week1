// write a program to count number of digits

#include <stdio.h>
int main() {
    int num;

    printf("enter the number: ");
    scanf("%d", &num);

    int count = 0;
    
    while(num != 0) {
        count++;
        num = num/10;
    }

    printf("number of digits in a given number: %d\n", count);
    
    return 0;
}

