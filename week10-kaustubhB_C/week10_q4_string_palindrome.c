#include <stdio.h>
#include <string.h>

void palindrome(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    palindrome(str);

    return 0;
}

void palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    int flag = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if (flag == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
}