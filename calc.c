#include <stdio.h>

int calc(int a, int b, char op);

int main(){
    int a,b,ans;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the operator: ");
    scanf(" %c", &op);

    ans = calc(a, b, op);

    printf("The result of %d %c %d is %d", a, op, b, ans);
    
    return 0;
}

int calc(int a, int b, char op){
    switch(op){
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return 0;
    }
}