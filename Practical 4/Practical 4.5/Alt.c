#include <stdio.h>

int main(){
    int num;

input:
    printf("Enter the number: ");
    scanf(" %d", &num);
    if (num != 0) {
        goto table;
    }else{
        goto input;
    }

table:
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", num, i, num*i);
    };

    return 0;
}