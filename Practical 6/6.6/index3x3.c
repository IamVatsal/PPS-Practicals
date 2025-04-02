#include<stdio.h>

int main(){
    int row = 3, col = 3;
    int a[3][3] = {{1, 2, 3}, {4,5, 6}, {7, 8, 9}};
    int b[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
    int c[3][3] = {0}; // Initialize all elements of c to 0

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print matrix a
    printf("Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    // Print matrix b
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    printf("\nMatrix C (Result of A x B):\n");
    // Print matrix c
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}