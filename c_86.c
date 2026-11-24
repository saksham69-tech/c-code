#include <stdio.h>
int sub(int a, int b)
{
    return a-b;
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    printf("Result = %d", sub(a,b));
    return 0;
}