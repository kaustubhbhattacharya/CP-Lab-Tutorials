#include <stdio.h>

#define M 10
#define N 10

int main() {
    int A[M][N];
    int r, c, i, j, key;
    int found = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (A[i][j] == key) {
                printf("Element found at [%d][%d]\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}