#include <stdio.h>

int main() {
    int x, y;
    printf("Enter any two coordinate values x and y: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("First quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("Second quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("Third quadrant.\n");
    } else if (x > 0 && y < 0) {
        printf("Fourth quadrant.\n");
    } else if (x == 0 && y == 0) {
        printf("Origin\n");
    } else if (y == 0) {
        printf("x-axis.\n");
    } else if (x == 0) {
        printf("y-axis.\n");
    }

    return 0;
}