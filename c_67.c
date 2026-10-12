#include <stdio.h>

int main() {
    int num = 35912, count = 0;
    while (num > 0) {
        if ((num % 10) % 2 != 0) count++;
        num /= 10;
    }
    printf("Count of odd digits: %d\n", count);
    return 0;
}