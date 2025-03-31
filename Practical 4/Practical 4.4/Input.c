#include<stdio.h>

int main() {
    char num;

    printf("Enter The Char : ");
    scanf(" %c", &num);

    if (num >= 65 && num <= 90) {
        printf("The Char is Uppercase.\n");
    } else if (num >= 97 && num <= 122) {
        printf("The Char is Lowercase.\n");
    } else if (num >= 48 && num <= 57) {
        printf("The Char is Digit.\n");
    } else {
        printf("The Char is Not Alphanumeric.\n");
    }

    return 0;
}