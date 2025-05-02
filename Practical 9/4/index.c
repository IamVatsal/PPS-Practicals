#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;

    printf("Value of a is %d\n", a);
    printf("Address of a is %p\n", &a);
    printf("Address of a with ptr %p\n", ptr);
    printf("Address of ptr is %p\n", &ptr);
    printf("Value of a with ptr %d\n", *ptr);
    
    return 0;
}