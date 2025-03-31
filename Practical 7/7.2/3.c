#include<stdio.h>

#define PI 3.14159

void area(float);

int main(){
    float rad;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &rad);
    area(rad);
    return 0;
}

void area(float rad){    
    printf("Area of the circle is %.2f\n", rad * rad * PI);
}