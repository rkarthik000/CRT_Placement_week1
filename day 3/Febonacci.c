// write a program to print febonacci

#include <stdio.h>
int main() {
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    int a = -1, b=1;

    for (int i = 0; i<=n; i++) {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}