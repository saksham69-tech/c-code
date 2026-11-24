#include <stdio.h>
float divide(float a, float b)
{
    return a/b;
}
int main()
{
    float a,b;
    scanf("%f%f", &a, &b);

    if(b != 0)
        printf("Result = %.2f", divide(a,b));
    else
        printf("Cannot divide by zero");

    return 0;
}