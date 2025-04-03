#include <stdio.h>

extern int a = 10; // Global variable
void fun(){
    printf("Global Variable From Function: %d\n", a);
}

int main(){
    printf("Global Variable From Main: %d\n", a);
    fun();
    return 0;
}