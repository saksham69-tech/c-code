#include <stdio.h>
#include <ctype.h>

int main() {
    char name[10];
    char ch;

    // String I/O
    puts("Enter the name:");
    fgets(name, 10, stdin);        
    printf("Name: %s", name);    

    printf("Enter a lowercase letter: ");
    ch = getchar();           
    printf("Uppercase: ");
    putchar(toupper(ch));          

    return 0;
}