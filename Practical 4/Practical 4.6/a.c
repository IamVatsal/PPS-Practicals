#include <stdio.h>

int main(){
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);

    switch(x){
        case 1:printf("1");break;
        case 2:printf("2");
        default:printf("3");
    }

    return 0;
}