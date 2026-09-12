// WAP to find maximum number in an array .

#include <stdio.h>
int main() {
    int arr[5],i,max;
    printf("Enter 5 elements of array: \n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum number in the array is: %d\n",max);
    return 0;
}