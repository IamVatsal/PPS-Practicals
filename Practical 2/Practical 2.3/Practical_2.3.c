#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The sum of integer variables %d and %d is: %d\n", a, b, a+b);
    
    float c, d;
    printf("Enter two numbers: ");
    scanf("%f %f", &c, &d);
    printf("The sum of float variables %f and %f is: %f\n", c, d, c+d);
    
    char x, y;
    printf("Enter two numbers: ");
    scanf("\n %c", &x);
    scanf("\n %c", &y);
    printf("The sum of character variables %c and %c is: %c \n", x, y, x+y);
    
    return 0;
}