#include <stdio.h>
#include <string.h>

int main() {
    char first[100], second[100];

    printf("Enter the first string: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0';

    int diff = strcmp(first, second);

    if (diff == 0) {
        printf("Strings are the same.\n");
    } else if (diff > 0) {
        printf("'%s' is greater than '%s'.\n", first, second);
    } else {
        printf("'%s' is greater than '%s'.\n", second, first);
    }

    return 0;
}