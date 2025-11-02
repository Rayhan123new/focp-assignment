#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        unsigned borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Result of %d - %d = %d", x, y, subtract(x, y));
    return 0;
}


    