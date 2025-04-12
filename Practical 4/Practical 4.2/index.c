#include <stdio.h>

int main() {
    int a;

    printf("Enter the Number: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Negative Number\n");
    } else if (a > 0) {
        printf("Positive Number\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}