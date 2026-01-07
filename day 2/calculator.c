// write a program that takes two operands and one operator from the user, perform the operation and print the result by using switch statement 

#include <stdio.h>
int main() {
    int a,b;
    char op;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    printf("choose the operator you want (+, -, /, *): ");
    scanf(" %c", &op);

    int result;
    switch(op) {
        
        case '+':
           result = a+b;
            break;

        case '-':
            result = a-b;
            break;
        
        case '/':
            if (b == 0){
                printf("cannot be divided by 0");
                break;
            }
            result = a/b;
            break;

        case '*':
            result = a*b;
            break;

        default:
            printf("invalid input");
    }
    printf("result: %d", result);
    return 0;
}