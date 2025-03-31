#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Original values: a = %d, b = %d\n", a, b);

    printf("Pre-increment (++a): %d\n", ++a);
    printf("Pre-decrement (--b): %d\n", --b);

    printf("Post-increment (a++): %d\n", a++);
    printf("Post-decrement (b--): %d\n", b--);

    printf("Final values: a = %d, b = %d\n", a, b);

    return 0;
}  