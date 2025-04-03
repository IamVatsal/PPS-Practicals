#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello World!";
    char str2[] = " Vatsal";
    strcat(str, str2);
    printf("String : %s\n", str);
    return 0;
}