// Program to check whether a character is Alphabet or Not .

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Character is an Alphabet\n");
    else
        printf("Character is Not an Alphabet\n");

    return 0;
}
