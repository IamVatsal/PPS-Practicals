#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10, b =20;

    swap(&a, &b);

    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    
    return 0;
}