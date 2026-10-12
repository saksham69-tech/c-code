#include <stdio.h>

int main() {
    int n = 23, sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    printf("Sum of digit squares: %d\n", sum);
    return 0;
}