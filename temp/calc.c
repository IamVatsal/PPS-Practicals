#include <stdio.h>

int calc(int a,int b,char o){
    switch(o){
        case '+':
            return a+b;
            break;
            
        case '-':
            return a-b;
            break;
        case '*':
            return a*b;
            break;
        case '/':
            if (b == 0){
                printf("B can't Be Zero");
            }
            return a/b;
            break;
        default:
            printf("Invalid Oprator");
            return 1;
    }
}

int main(){
    int a,b;
    char o;
    
    printf("Enter Number A: ");
    scanf("%d",&a);
    printf("Enter Number B: ");
    scanf("%d",&b);
    printf("Enter Oprator: ");
    scanf(" %c",&o);

    printf("\nAns : %d",calc(a,b,o));    
    
    return 0;
}