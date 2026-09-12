// WAP to find increment of a number .

#include <stdio.h>
void increment(int x){
    x = x+1;
    printf("Incremented value: %d\n", x);
}

int main() {
    int a = 7;

    printf("Original value: %d\n", a);
    increment(a);

    printf("Value in main after increment function: %d\n", a);
    return 0;
}