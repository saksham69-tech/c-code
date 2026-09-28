#include <stdio.h>
int main() {
    int choice;
    printf("1. Square\n2. Cube\n3. Exit\nEnter choice: ");
    scanf("%d", &choice);
    int n = 4;
    switch (choice) {
        case 1: printf("Square = %d\n", n * n); break;
        case 2: printf("Cube = %d\n", n * n * n); break;
        case 3: printf("Exiting...\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}