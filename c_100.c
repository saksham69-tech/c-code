#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);

    printf("Addition = %d\n", a+b);
    printf("Subtraction = %d\n", a-b);
    printf("Multiplication = %d\n", a*b);

    if(b != 0)
        printf("Division = %.2f", (float)a/b);
    else
        printf("Division not possible");

    return 0;
}