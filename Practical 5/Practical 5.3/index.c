#include <stdio.h>

int main(){
    int num,temp,digit,rev = 0;

    printf("Enter Number : ");
    scanf("%d",&num);

    temp = num;

    while(temp > 0){
        digit = temp%10;
        rev *= 10;
        rev += digit; 
        temp /= 10;
    }

    if(num == rev){
        printf("Number is Palindrome.");
    }else{
        printf("Number is Not Palindrome.");
    }

    return 0;
}