#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "kanak";
    char temp[100];
    strcpy(temp, str);
    strrev(temp);
    if (strcmp(temp, str) == 0) {
        printf("String is Palindrome\n");
    } else {
        printf("String is not Palindrome\n");
    }
    return 0;
}