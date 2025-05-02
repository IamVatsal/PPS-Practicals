#include <stdio.h>

int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return a,b;
}

int main(){
    int a = 10, b= 20;

    a,b = swap(a,b);

    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
}