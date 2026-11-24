#include <stdio.h>
int main()
{
    int a[5], i, result;
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);

    result = a[0];
    for(i=1; i<5; i++)
        result = result-a[i];

    printf("Result = %d", result);
    return 0;
}