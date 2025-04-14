#include <stdio.h>

int main(){
    int a,b,ans;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the operator: ");
    scanf(" %c", &op);


    switch(op){
        case '+':
            ans = a + b;
            printf("The sum of %d and %d is %d", a, b, ans);
            break;
        case '-':
            ans = a - b;
            printf("The difference of %d and %d is %d", a, b, ans);
            break;
        case '*':
            ans = a * b;
            printf("The product of %d and %d is %d", a, b, ans);
            break;
        case '/':
            ans = a / b;
            printf("The division of %d and %d is %d", a, b, ans);
            break;
        default:
            printf("Invalid operator");
    }
}