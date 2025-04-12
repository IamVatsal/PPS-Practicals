#include <stdio.h>

int main(){
    int num = 4, n = 1;
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",n++);
        }
        printf("\n");
    }
    return 0;
}