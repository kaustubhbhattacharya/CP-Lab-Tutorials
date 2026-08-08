#include <stdio.h>

int main() {
    int i, num, count = 0;
    printf("Enter any random number: \n");
    scanf("%d", &num);

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 0) {
        printf("it is a prime number \n");
    } else {
        printf("it is a composite number\n");
    }

    return 0;
}