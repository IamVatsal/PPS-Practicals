#include <stdio.h>
void fun(int[],int);

void main(){
    int arr[5]={6,9,3,4,2};
    fun(arr,5);
}

void fun(int a[],int size){
    int i,j,temp;
    for(i=0;i<=(size-1);i++){
        for(j=i+1;j<=(size-1);j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0;i<=(size-1);i++){
        printf("%d",a[i]);
    }
}