#include <stdio.h>

int main() {
    int num = 234, prod = 1;
    while (num > 0) {
        prod *= (num % 10);
        num /= 10;
    }
    printf("Product of digits: %d\n", prod);
    return 0;
}