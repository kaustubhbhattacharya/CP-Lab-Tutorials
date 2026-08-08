#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    float basic[n], total[n];
    float hra, special, temp;

    for (i = 0; i < n; i++) {
        printf("\nEnter basic salary for employee %d: ", i + 1);
        scanf("%f", &basic[i]);

        hra = 0.40 * basic[i];
        special = 0.25 * basic[i];
        total[i] = basic[i] + hra + special;

        printf("HRA allowance = %.2f\n", hra);
        printf("Special allowance = %.2f\n", special);
        printf("Total salary = %.2f\n", total[i]);
    }

    // Sorting in descending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (total[i] < total[j]) {
                temp = total[i];
                total[i] = total[j];
                total[j] = temp;
            }
        }
    }

    printf("\nSalaries in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f\n", total[i]);
    }

    return 0;
}