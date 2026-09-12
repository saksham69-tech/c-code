// WAP to display a message based on age using switch case .

#include <stdio.h>
int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age) {
        case 16:
            printf("You are a teenager.\n");
            break;
        case 20:
            printf("You are an adult.\n");
            break;
        case 62:
            printf("You are a senior citizen.\n");
            break;
        default:
            printf("Age not categorized.\n");
    }

    return 0;
}