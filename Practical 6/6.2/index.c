#include<stdio.h>

int main() {
    int array[10], oddIndex = 0, evenIndex = 1;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            // Even index
            evenIndex *= array[i];
        } else {
            // Odd index
            oddIndex += array[i];
        }
    }

    printf("Sum of elements at odd indexes: %d\n", oddIndex);
    printf("Product of elements at even indexes: %d\n", evenIndex);

    return 0;
}