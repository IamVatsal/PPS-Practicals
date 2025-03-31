#include <stdio.h>

int main() {
    float r,h,l,b;
    const float pi = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);

    float volume = pi * (r * r) * h;
    printf("The volume of the cylinder is: %.2f\n", volume);

    printf("Enter the length of the Square: ");
    scanf("%f", &l);

    float svolume = l * l * l;
    printf("The volume of the square is: %.2f\n", svolume);

    printf("Enter the length of the Rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the Rectangle: ");
    scanf("%f", &b);
    printf("Enter the height of the Rectangle: ");
    scanf("%f", &h);

    float cvolume = l * b * h;
    printf("The volume of the rectangle is: %.2f\n", cvolume);
    return 0;
}