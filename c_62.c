#include <stdio.h>

int main()
{
    int i, even = 0, odd = 0;

    for (i = 101; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even numbers = %d\n", even);
    printf("Number of odd numbers = %d\n", odd);

    return 0;
}