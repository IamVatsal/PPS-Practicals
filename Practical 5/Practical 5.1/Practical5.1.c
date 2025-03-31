#include <stdio.h>

int main(){
    int num,sum = 0;

    printf("Enter the number: ");
    scanf(" %d", &num);

    printf("Odd numbers are: ");
    for (int i = 0; i < num; i++){
        if (i %2 != 0){
            sum += num;
            printf("%d, ", i);
        }
    }

    

    printf("\nSum of odd numbers: %d\n", sum);

    return 0;
}