#include <stdio.h>

#define T 32

int main(){
    float F,C;
    const float t =1.8;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &F);

    F = (F*t)+T;
    printf("The temperature in Fahrenheit is: %.2f\n", F);

    return 0;
}