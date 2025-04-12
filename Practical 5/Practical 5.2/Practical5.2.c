#include <stdio.h>

int main(){
    int num,sum=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 0){
        printf("Enterd Number is not Perfect!\n");
        return 0;
    }

    for (int i = 1; i <= num/2; i++){
        if (num % i == 0){
            sum += i;
        }
    }

    if (sum == num){
        printf("Enterd Number is Perfect\n");
    }else{
        printf("Enterd Number is not Perfect!\n");
    }

    return 0;
}