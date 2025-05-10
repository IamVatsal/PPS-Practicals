#include <stdio.h>

int main(){
    int a = 10;
    int* ptr = &a;

    printf("Value of a before change is %d\n", a);

    *ptr = 20;

    printf("Value of a after change is %d\n", a);
    
    return 0;
}