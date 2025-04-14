#include <stdio.h>

int main(){
    int a, b;
    float c, d;

    printf("Enter numbers a: ");
    scanf("%d", &a);
    printf("Enter numbers b: ");
    scanf("%d", &b);
    printf("Enter numbers c: ");
    scanf("%f", &c);
    printf("Enter numbers d: ");
    scanf("%f", &d);

    // implicit type conversion
    printf("%d + %d / %f + %f = %f\n",a,b,c,d,a+b / c+d);

    // explicit type conversion
    printf("(%d + %d) * (%d - %d) = %f\n",a,b,a,b,(float)(a+b)*(a-b));
    
    return 0;
}