#include<stdio.h>

int main() {
    int array[10], oddIndexSum = 0, evenIndexProduct = 1;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            // Even index
            evenIndexProduct *= array[i];
        } else {
            // Odd index
            oddIndexSum += array[i];
        }
    }

    printf("Sum of elements at odd indexes: %d\n", oddIndexSum);
    printf("Product of elements at even indexes: %d\n", evenIndexProduct);

    return 0;
}