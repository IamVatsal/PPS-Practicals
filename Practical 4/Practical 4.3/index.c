#include <stdio.h>

int main() {
    int a,b;

    printf("Enter the Number a: ");
    scanf("%d", &a);
    printf("Enter the Number a: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Maximum is %d\n", a);
    } else if (b > a) {
        printf("Maximum is %d\n", b);
    } else {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}