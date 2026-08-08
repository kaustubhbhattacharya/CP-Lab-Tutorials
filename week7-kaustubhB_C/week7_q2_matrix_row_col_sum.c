#include <stdio.h>

#define M 10
#define N 10

int main() {
    int A[M][N];
    int r, c, i, j;
    int rowSum, colSum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        rowSum = 0;
        for (j = 0; j < c; j++) {
            rowSum += A[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    for (j = 0; j < c; j++) {
        colSum = 0;
        for (i = 0; i < r; i++) {
            colSum += A[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    return 0;
}