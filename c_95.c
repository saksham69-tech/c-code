#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f%f", &a, &b);

    if(b != 0)
        printf("Division = %.2f", a/b);
    else
        printf("Cannot divide by zero");

    return 0;
}