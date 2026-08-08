#include <stdio.h>

int main() {
    int num, i, j, factorial;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial = factorial * j;
        }
        printf("%d\n", factorial);
    }

    return 0;
}