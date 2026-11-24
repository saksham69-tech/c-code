#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
    printf("Sum = %.2f", a + b);
    return 0;
}