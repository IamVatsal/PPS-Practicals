#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b; // a becomes sum of a and b
    b = a - b; // b gets original a's value
    a = a - b; // a gets original b's value

    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}