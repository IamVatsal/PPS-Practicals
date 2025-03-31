#include<stdio.h>

#define PI 3.14159

void area();

int main(){
    area();
    return 0;
}

void area(){
    float rad = 5;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &rad);
    printf("Area of the circle is %.2f\n", rad * rad * PI);
}