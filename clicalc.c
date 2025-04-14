#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }

    float a = atof(argv[1]),b = atof(argv[3]);
    char op = argv[2][0];
    float result;

    switch(op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 
            if(b == 0) {
                printf("Error: Division by zero.\n");
                return 1;
            }
            result = a / b; 
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", a, op, b, result);
    return 0;
}
