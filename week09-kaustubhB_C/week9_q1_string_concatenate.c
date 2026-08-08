#include <stdio.h>
#include <string.h>

int main() {
    char first[50], middle[50], last[50], full[150] = "";

    printf("Enter your first name: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Enter your middle name: ");
    fgets(middle, sizeof(middle), stdin);
    middle[strcspn(middle, "\n")] = '\0';

    printf("Enter your last name: ");
    fgets(last, sizeof(last), stdin);
    last[strcspn(last, "\n")] = '\0';

    strcat(full, first);
    strcat(full, " ");
    strcat(full, middle);
    strcat(full, " ");
    strcat(full, last);

    printf("Full Name: %s\n", full);

    return 0;
}