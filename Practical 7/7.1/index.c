#include <stdio.h>

void isPrime(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    isPrime(n);
    return 0;
}

void isPrime(int n){
    if(n == 1){
        printf("1 is not a prime number\n");
        return;
    }
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            printf("%d is not a prime number\n", n);
            return;
        }
    }
    printf("%d is a prime number\n", n);
}