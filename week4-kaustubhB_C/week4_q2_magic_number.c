#include <stdio.h>

int main() {
    int num, original, sumcopy, sum = 0, reverse = 0, digit;
    printf("Please enter any number: \n");
    scanf("%d", &num);

    original = num;

    do {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    } while (num > 0);

    printf("sum = %d \n", sum);
    sumcopy = sum;

    do {
        digit = sum % 10;
        reverse = reverse * 10 + digit;
        sum = sum / 10;
    } while (sum > 0);

    printf("reverse = %d\n", reverse);

    if (sumcopy * reverse == original) {
        printf("This is a magic number\n");
    } else {
        printf("Not a magic number.\n");
    }

    return 0;
}