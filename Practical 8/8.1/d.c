#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello World!";
    char copied[] = "";
    strcpy(copied, str);
    printf("String Copied: %s\n", copied);
    return 0;
}