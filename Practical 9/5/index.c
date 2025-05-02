#include <stdio.h>

int main(){
    int a = 10;
    int* ptr = &a;

    printf("Value of a is before change %d\n", a);

    *ptr = 20;

    printf("Value of a is after change %d\n", a);
    
    return 0;
}