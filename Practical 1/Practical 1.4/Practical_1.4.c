#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\t\t%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d", a, b, a - b);
    printf("\t%d %% %d = %d", a, b, a % b);
    printf("\t%d * %d = %d\n", a, b, a * b);
    printf("\t\t%d / %d = %d\n", a, b, a / b);
    
    return 0;
}