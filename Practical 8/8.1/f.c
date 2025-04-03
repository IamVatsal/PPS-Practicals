#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello World!";
    char str2[] = " Hello World!";
    printf("String 1: %s\n", str);
    printf("String 2: %s\n", str2);
    if (strcmp(str, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    return 0;
}