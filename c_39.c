#include <stdio.h>
int main() {
    int age;
    float income;
    printf("Enter age and income: ");
    scanf("%d %f", &age, &income);
    if (age >= 21) {
        if (income >= 25000)
            printf("Eligible for loan\n");
        else
            printf("Income too low for loan\n");
    } else
        printf("Age must be at least 21\n");
    return 0;
}