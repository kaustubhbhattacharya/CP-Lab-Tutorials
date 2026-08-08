#include <ctype.h>
#include <stdio.h>

void showColour(char c) {
    switch (toupper(c)) {
        case 'R':
            printf("Red\n");
            break;
        case 'O':
            printf("Orange\n");
            break;
        case 'Y':
            printf("Yellow\n");
            break;
        case 'G':
            printf("Green\n");
            break;
        case 'B':
            printf("Blue\n");
            break;
        case 'I':
            printf("Indigo\n");
            break;
        case 'V':
            printf("Violet\n");
            break;
        default:
            printf("The entered colour is not present\n");
    }
}

int main() {
    char col;
    printf("Please enter any colour character (ROYGBIV): ");
    scanf(" %c", &col);
    showColour(col);
    return 0;
}