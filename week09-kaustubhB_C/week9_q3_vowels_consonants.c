#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, vowel = 0, consonant = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel++;
            } else {
                consonant++;
            }
        }
    }

    printf("Number of Vowels: %d\n", vowel);
    printf("Number of Consonants: %d\n", consonant);

    return 0;
}