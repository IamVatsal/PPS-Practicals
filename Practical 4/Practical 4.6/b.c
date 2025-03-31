#include<stdio.h>

int

global_num=20;

int main(){
    int sum = global_num = global_num;
    {
        int sum = 300;
        printf("Inside Block: Sum: %d\n", sum);
    }
    printf("Outside Block: Sum: %d\n", sum);

}
