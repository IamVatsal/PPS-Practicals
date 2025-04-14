#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main() {
    float (*ops[4])(float, float) = { add, subtract, multiply , div};
    float a, b;
    int bol = 1, choice;
    char ch;

    while(bol){
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        printf("Enter any operation (+ = 1, - = 2, * = 3, / = 4):\n");
        scanf("%d", &choice);

        choice -= 1;

        if (choice < 0 || choice > 3) {
            printf("Invalid operation choice!\n");
            continue;
        }
        if ((choice == 3) && b == 0) {
            printf("Error: Division by zero!\n");
            continue;
        }
        float result = ops[choice](a, b);
        printf("Result: %.2f\n", result);
        
        printf("Do you want to continue (Y,N)?: ");
        scanf(" %c", &ch);

        if(ch == 'N' || ch == 'n'){
            bol = 0;
        }else if(ch == 'Y' || ch == 'y'){
            bol = 1;
        }else{
            printf("Invalid input. Exiting...\n");
            bol = 0;
        }
    }
    return 0;
}
