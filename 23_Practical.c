// WAP to swap two number using call by reference .

#include <stdio.h>

void swap(int *x, int *y) {
    int z;
    z = *x;   
    *x = *y;
    *y = z;   
}

int main() {
    int a = 10, b = 20;
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0; 
}