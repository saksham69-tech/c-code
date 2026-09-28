#include <stdio.h>
int main() {
    int arr[] = {23, 67, 12, 89, 45};
    int n = 5, largest = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > largest)
            largest = arr[i];
    printf("Largest number = %d\n", largest);
    return 0;
}