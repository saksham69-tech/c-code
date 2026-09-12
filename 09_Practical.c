// WAP to find the factorial of a number . 

#include <stdio.h>
int main () {

int n , fact = 1;
printf("Ente a Number : ");
scanf("%d",&n);

for(int i = 1; i<=n; i++)
fact = fact * i;
printf("Factorial = %d", fact);
    return 0;

}