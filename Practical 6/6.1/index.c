#include<stdio.h>

int main() {
    // Using int array
    int intArray[10] = {1,2,3,4,5,6,7,8,9,10}, intSum = 0;
    float intAvg;
    for (int i = 0; i < 10; i++) {
        intSum += intArray[i];
    }
    intAvg = intSum / 10.0; // Calculate average
    printf("Sum of integers: %d\n", intSum);
    printf("Average of integers: %.2f\n\n", intAvg);

    // Using float array
    float floatArray[10] = {1.9,2.8,3.7,4.6,5.5,6.4,7.3,8.2,9.1,10.6}, floatSum = 0, floatAvg;
    printf("Enter 10 floating-point numbers:\n");
    for (int i = 0; i < 10; i++) {
        floatSum += floatArray[i];
    }
    floatAvg = floatSum / 10; // Calculate average
    printf("Sum of floats: %.2f\n", floatSum);
    printf("Average of floats: %.2f\n", floatAvg);

    return 0;
}


