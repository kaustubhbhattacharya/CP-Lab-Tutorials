#include <stdio.h>

void showfactor(int num) {
    int i, factorCount = 0;
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("Factor is: %d\n", i);
            factorCount++;
        }
    }
    printf("Total number of factors are: %d\n", factorCount);
}

int main() {
    int x;
    printf("Enter any integer: ");
    scanf("%d", &x);
    showfactor(x);
    return 0;
}