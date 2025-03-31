#include<stdio.h>

int main(){
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    int temp;
    int size = sizeof(a)/sizeof(a[0]);
    for (int i = 0 ; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array is: ");
    for (int i = 0 ; i < 10; i++){
        printf("%d ",a[i]);
    }
    return 0;
}