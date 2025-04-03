#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello World!";
    printf("String Upper: %s\n", strupr(str));
    printf("String Lower: %s\n", strlwr(str));
    return 0;
}