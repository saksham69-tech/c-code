// WAP to check Armstrong number . 

#include <stdio.h>
#include <math.h>

int main () {
    int num , sum = 0 , temp , r ;
    printf("Enter the Number ; ");
    scanf("%d", &num);
    temp = num;

    while(temp != 0){
        r = temp%10;
        sum += r*r*r;
        temp /= 10 ;
    }

    if(sum == num)
    printf("Armstrong Number ");
    else
    printf("Not Armstrong Number ");
    
    return 0;

}