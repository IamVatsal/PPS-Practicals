#include <stdio.h>

int main(){
    int num = 5;
    for(int i = num; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}