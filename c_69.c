#include <stdio.h>

int main() {
    int num = 7432, first, last;
    last = num % 10;
    first = num;
    while (first >= 10) {
        first /= 10;
    }
    printf("First digit: %d, Last digit: %d\n", first, last);
    return 0;
}