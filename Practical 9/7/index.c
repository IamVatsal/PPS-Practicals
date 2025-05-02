#include <stdio.h>

int main(){
    int arr[10];
    int *ptr = arr;
    FILE *fp;
    fp = fopen("int.txt", "r");

    for(int i = 0 ;i < 10; i++){
        // printf("Enter value of %d: ", i+1);
        fscanf(fp,"%d", ptr+i);
    }
    printf("\nValues in array are:\n");
    for(int i = 0 ;i < 10; i++){
        printf("Value of %d is %d\n", i+1, *(ptr+i));
    }
    return 0;
}