#include <stdio.h>

int main() {
    int num = 1221, orig = num, rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    printf("%d is %s\n", orig, (orig == rev) ? "a Palindrome" : "not a Palindrome");
    return 0;
}