// WAP to copy the detail of one of the structure variable to another structure variable .

#include <stdio.h>
#include <string.h>
struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s1, s2;

    
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    s2 = s1;

    printf("\nDetails of second student (copied from first):\n");
    printf("Roll Number: %d\n", s2.roll);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}