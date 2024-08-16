//*write a code for matrix multiplication in c  by user input data
#include <stdio.h>

#define ROWS 3
#define COLS 3

void multiplyMatrix(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    int i, j, k;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROWS][COLS];
    int mat2[ROWS][COLS];
    int result[ROWS][COLS];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrix(mat1, mat2, result);

    printf("Matrix 1:\n");
    displayMatrix(mat1);

    printf("\nMatrix 2:\n");
    displayMatrix(mat2);

    printf("\nResultant Matrix:\n");
    displayMatrix(result);

    return 0;
}
