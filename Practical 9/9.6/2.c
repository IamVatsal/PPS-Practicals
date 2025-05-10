#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Value of a and b inside Function is %d, %d\n",*a,*b);
}

int main(){
    int a = 10, b =20;

    swap(&a, &b);
    
    printf("Value of a and b inside Main is %d, %d\n", a,b);
    return 0;
}