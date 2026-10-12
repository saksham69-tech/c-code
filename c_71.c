#include <stdio.h>

int main() {
    int a = 56, b = 98;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    printf("GCD: %d\n", a);
    return 0;
}