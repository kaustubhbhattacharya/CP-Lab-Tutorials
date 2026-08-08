#include <stdio.h>

#define M 10
#define N 10

int main() {
    int A[M][N];
    int r, c, i, j;
    int mainDiag = 0, oppDiag = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Invalid matrix (Not square)\n");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        mainDiag += A[i][i];
        oppDiag += A[i][r - i - 1];
    }

    printf("Sum of main diagonal = %d\n", mainDiag);
    printf("Sum of opposite diagonal = %d\n", oppDiag);

    return 0;
}