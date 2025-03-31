#include<stdio.h>

int main(){
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    int temp = a[0];
    for (int i = 1 ; i < 10; i++){
        if(a[i] > temp){
            temp = a[i];
        }
    }
    printf("Maximam Element in array is: ");
    printf("%d",temp);

    return 0;
}