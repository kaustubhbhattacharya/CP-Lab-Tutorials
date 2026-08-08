#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks in 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Percentage = %.2f\n", percentage);

    if (percentage > 80) {
        printf("Division: Distinction\n");
    } else if (percentage >= 60) {
        printf("Division: First\n");
    } else if (percentage >= 45) {
        printf("Division: Second\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}