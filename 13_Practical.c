// WAP to reverse a number .

#include <stdio.h>
int main () {

int num,rev=0,r;
printf("Enter the Number : ");
scanf("%d", &num);

while(num!=0){
    r = num % 10 ;
    rev = rev * 10 + r;
    num/= 10;
}

printf("Reverse = %d", rev);

    return 0;

}