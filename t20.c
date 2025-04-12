#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (a > b) {
        case 1:
            printf("Maximum is %d\n", a);
            break;
        case 0:
            switch (b > a) {
                case 1:
                    printf("Maximum is %d\n", b);
                    break;
                case 0:
                    printf("Both numbers are equal: %d\n", a);
                    break;
            }
            break;
    }

    return 0;
}
