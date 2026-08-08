#include <stdio.h>

void numcheck(int num) {
    int i, j, fac, numcopy, digit, sum = 0;
    numcopy = num;

    while (numcopy > 0) {
        digit = numcopy % 10;
        fac = 1;
        for (j = 1; j <= digit; j++) {
            fac *= j;
        }
        sum += fac;
        numcopy /= 10;
    }

    printf("%d\n", sum);
    if (sum == num) {
        printf("it is a magic number.\n");
    } else {
        printf("Not a magic number.\n");
    }
}

int main() {
    int n;
    printf("Enter ur number: ");
    scanf("%d", &n);
    numcheck(n);
    return 0;
}