#include <stdio.h>

int main() {
    int n, m, i, j;
    float marks, sum, avg;

    printf("Enter no of students: ");
    scanf("%d", &n);
    printf("Enter no of subjects: ");
    scanf("%d", &m);

    for (i = 1; i <= n; i++) {
        sum = 0;
        printf("Enter marks for student %d: ", i);
        for (j = 1; j <= m; j++) {
            scanf("%f", &marks);
            sum += marks;
        }
        avg = sum / m;
        printf("Percentage: %.1f\n", avg);
    }

    return 0;
}