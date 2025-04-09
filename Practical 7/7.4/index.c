#include <stdio.h>

double fact(int);

int main(){
    int n = 10;
    int factValue = fact(n);
    int factValue2 = fact(n);
    printf("The Factorial value is: %d\n", factValue);
    printf("The Factorial value With Loop is: %d\n", factValue2);
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
    for (int i = n; i > 1; i--){
        n *= i;
    }
}