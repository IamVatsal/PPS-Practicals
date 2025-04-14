#include <stdio.h>

int main(){
    int a,b,ans,c = 1;
    char o,ch;
    while(c){
        printf("\nEnter the value of a : ");
        scanf("%d",&a);
        printf("Enter the value of b : ");
        scanf("%d",&b);

        printf("\n===========================\n");
        printf("Enter any opration listed below:\n");
        printf("1. Addition (Press +)\n");
        printf("2. Subtraction (Press -)\n");
        printf("3. Multiplication (Press *)\n");
        printf("4. Division (Press /)\n");
        printf("5. Modulo (Press %%)\n");

        printf("Enter Your Choice of Opration: ");
        scanf(" %c", &o);

        switch(o){
            case '+':
                ans = a+b;
                break;
            case '-':
                ans = a-b;
                break;
            case '*':
                ans = a*b;
                break;
            case '/':
                ans = a/b;
                break;
            case '%':
                ans = a%b;
                break;
            default:
                printf("Invalid Input");
                break;
        }

        printf("%d %c %d = %d",a,o,b,ans);

        printf("\nDo you want to continue (Y/N)?: ");
        scanf(" %c", &ch);
        if(ch == 'N' || ch == 'n'){
            c = 0;
        }else if(ch == 'Y' || ch == 'y'){
            c = 1;
        }     
    }
    return 0;
}