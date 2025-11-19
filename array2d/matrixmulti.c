#include <stdio.h>   // needed for printf and scanf

int main() {
    int n1, m1, n2, m2;

    // Ask user for sizes of the two matrices
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &n1, &m1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &n2, &m2);

    // Check if multiplication is possible: columns of A must equal rows of B
    if (m1 != n2) {
        printf("Matrix multiplication not possible!\n");
        return 0;   // exit program early
    }

    // Declare matrices as Variable Length Arrays (C99 feature).
    // a is n1 x m1, b is n2 x m2, c is n1 x m2 (result)
    int a[n1][m1], b[n2][m2], c[n1][m2];

    // Read elements of first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read elements of second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix c to 0 (important!)
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            c[i][j] = 0;
        }
    }

    // The core multiplication: triple nested loops
    // i iterates rows of A (and rows of C)
    // j iterates columns of B (and columns of C)
    // k iterates across the shared dimension (columns of A / rows of B)
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            for (int k = 0; k < m1; k++) {  // m1 == n2
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result matrix
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
