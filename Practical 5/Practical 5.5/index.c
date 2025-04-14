#include <stdio.h>

int main(){
    int num,b = 1;
    
    printf("Enter Number : ");
    scanf("%d",&num);

    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            b = 0;
        }
    }

    if (b == 0){
        printf("Number is Not Prime.");
    }else{
        printf("Number is Prime.");
    }

    return 0;
}