#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter any two integer values a and b: ");
    scanf("%d %d", &a, &b);

    printf("Values before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Values after swapping: a = %d, b = %d\n", a, b);

    return 0;
}