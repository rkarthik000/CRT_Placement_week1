#include <stdio.h>
int main() {
    char food;
    int qty;
    int total = 0;

    printf("menu\n");
    printf("Burger 200/-\n");
    printf("French Fries 50/-\n");
    printf("Pizza 500/-\n");
    printf("Sandwiches 150/-\n");

    printf("what food you want? (B/F/P/S): ");
    scanf(" %c", &food);

    printf("how much quantity?: ");
    scanf("%d", &qty);

    switch(food) {
        case 'B':
            total = 200*qty;
            break;

        case 'F':
            total = 50*qty;
            break;

        case 'P':
            total = 500*qty;
            break;

        case 'S':
            total = 150*qty;
            break;

        default: 
            printf("that item is not available\n");
    }

    printf("total bill: %d", total);
    return 0;

}