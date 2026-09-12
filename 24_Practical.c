// WAP to calculate the sum of the main diagonal elements of a 3x3 matrix.

#include <stdio.h>

int main() {
    int a[3][3], r, c, sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for(r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            scanf("%d", &a[r][c]);
        }
    }

    for(r = 0; r < 3; r++) {
        sum += a[r][r];
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
} 