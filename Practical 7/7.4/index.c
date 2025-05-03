#include <stdio.h>

double fact(int);
double factWithLoop(int);

int main(){
    double n = 10;
    double factValue = fact(n);
    double factValue2 = factWithLoop(n);
    printf("The Factorial value is: %.2lf\n", factValue);
    printf("The Factorial value With Loop is: %.2lf\n", factValue2);
    return 0;
}

double fact(int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

double factWithLoop(int n){
    if (n == 0 || n == 1) {
        return 1.0;
    }

    double proud = 1;

    for (int i = n; i > 1; i--){
        proud *= i;
    }
    return proud;
}