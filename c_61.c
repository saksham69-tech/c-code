#include <stdio.h>

int main()
{
    int i, j, count = 0, isPrime;

    printf("Prime numbers from 1 to 50 are:\n");

    for (i = 2; i <= 50; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal prime numbers = %d", count);

    return 0;
}