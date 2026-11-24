#include <stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);

    if(b != 0 && c != 0)
        printf("Result = %.2f", a/b/c);
    else
        printf("Cannot divide by zero");

    return 0;
}