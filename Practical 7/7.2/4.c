#include<stdio.h>

#define PI 3.14159

float area(float);

int main(){
    float rad = 5;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &rad);
    printf("Area of the circle is %.2f\n", area(rad));
    return 0;
}

float area(float r){
    return PI * r * r;
}