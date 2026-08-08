#include <stdio.h>

float calculateSum(float num[], int n);

int main() {
    int i, n;
    float num[100], result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &num[i]);
    }

    result = calculateSum(num, n);
    printf("Sum = %.2f\n", result);

    return 0;
}

float calculateSum(float num[], int n) {
    int i;
    float sum = 0.0;

    for (i = 0; i < n; ++i) {
        sum += num[i];
    }

    return sum;
}