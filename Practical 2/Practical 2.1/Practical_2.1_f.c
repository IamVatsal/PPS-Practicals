#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Bitwise AND: %d & %d = %d\n", a, b, a & b);
    printf("Bitwise OR: %d | %d = %d\n", a, b, a | b);
    printf("Bitwise aOR: %d ^ %d = %d\n", a, b, a ^ b);
    printf("Left Shift: %d << 1 = %d\n", a, a << 1);
    printf("Right Shift: %d >> 1 = %d\n", a, a >> 1);
    printf("Bitwise NOT: ~%d = %d\n", a, ~a);

    return 0;
}  