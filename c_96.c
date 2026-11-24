#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);

    if(b != 0)
        printf("Division = %d", a/b);
    else
        printf("Cannot divide by zero");

    return 0;
}