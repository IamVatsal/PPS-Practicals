#include<stdio.h>

int main(){
    int a[3][3]= {0};
    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 3; j++){
            printf("At Row:%d, Col:%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nMatrix :\n");
    for (int i = 0 ; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}