// WAP to convert an uppercase character to lowercase character .

#include <stdio.h>

void toLowercase(char *ch) {
    int i = 0;
while (ch[i] != '\0') {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            ch[i] = ch[i] + 32;
        }
        i++;
    }
}

int main() {
    char ch[100];

    printf("Enter an uppercase character: ");
    gets(ch);

    toLowercase(ch);
    printf("Lowercase character: %s\n", ch);

    return 0;
}