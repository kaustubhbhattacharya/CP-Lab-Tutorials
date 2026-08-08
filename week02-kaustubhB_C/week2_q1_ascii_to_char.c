#include <stdio.h>

int main() {
    int n;
    printf("Enter an ASCII value (0 to 255): ");
    scanf("%d", &n);

    if (n >= 0 && n <= 255) {
        printf("Equivalent character: %c\n", n);
    } else {
        printf("Invalid ASCII value\n");
    }

    return 0;
}