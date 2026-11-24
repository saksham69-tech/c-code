#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    if(a>b)
        printf("Difference = %d", a-b);
    else
        printf("Difference = %d", b-a);
    return 0;
}