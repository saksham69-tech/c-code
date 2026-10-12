#include <stdio.h>

int main() {
    int n = 9875;
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    printf("Digital Root: %d\n", n);
    return 0;
}