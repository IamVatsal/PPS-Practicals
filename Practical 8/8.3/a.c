#include <stdio.h>
#include "b.c"

extern int a; // Global variable

void fun(){
    printf("Global Variable From Function: %d\n", a);
}

int main(){
    printf("Global Variable From Main: %d\n", a);
    fun();
    return 0;
}