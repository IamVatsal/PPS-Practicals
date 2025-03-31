#include<stdio.h>

#define PI 3.14159

float area();

int main(){
    float a = area();
    printf("Area of the circle is %.2f\n",a);
    return 0;
}

float area(){
    float rad;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &rad);
    return rad * rad * PI;
}