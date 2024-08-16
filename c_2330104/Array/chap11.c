#include<stdio.h>
#include <stdio.h>

int main() {
    int a1, a2, b1, b2;

    printf("MATRIX 1\n");
    printf("Enter the number of rows: ");
    scanf("%d", &a1);
    printf("Enter the number of columns: ");
    scanf("%d", &a2);

    printf("MATRIX 2\n");
    printf("Enter the number of rows: ");
    scanf("%d", &b1);
    printf("Enter the number of columns: ");
    scanf("%d", &b2);

    int x1[a1][a2];             
    int x2[b1][b2];
    int x3[a1][b2];

    printf("Enter values for MATRIX 1:\n");
    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < a2; j++) {
            printf("Enter the value at position (%d, %d): ", i, j);
            scanf("%d", &x1[i][j]);
        }
    }

    printf("Enter values for MATRIX 2:\n");
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < b2; j++) {
            printf("Enter the value at position (%d, %d): ", i, j);
            scanf("%d", &x2[i][j]);
        }
    }

    printf("MATRIX 1:\n");
    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < a2; j++) {
            printf("%d ", x1[i][j]);
        }
        printf("\n");
    }

    printf("MATRIX 2:\n");
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < b2; j++) {
            printf("%d ", x2[i][j]);
        }
        printf("\n");
    }

    if (a2 != b1) {
        printf("Matrix multiplication is not possible due to dimension mismatch.\n");
    } else {
        printf("MATRIX 3 (Result of multiplication):\n");
        for (int i = 0; i < a1; i++) {
            for (int j = 0; j < b2; j++) {
                x3[i][j] = 0;
                for (int k = 0; k < a2; k++) {
                    x3[i][j] += x1[i][k] * x2[k][j];
                }
                printf("%d ", x3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}