#include<stdio.h>

int main(){
    // 3D Array
    int a[2][3][4]= {0};
    int temp = 1;

    // Scaning values into 3D array
    for(int i = 0 ; i < 2; i++){
        for(int j = 0 ; j < 3; j++){
            for(int k = 0 ; k < 4; k++){
                // printf("At Matrix:%d, Row:%d, Col:%d : ",i,j,k);
                a[i][j][k] = temp;
                temp++;
                // scanf("%d",&a[i][j][k]);
            }
        }
    }
    
    // Printing 3D array
    for(int i = 0 ; i < 2; i++){
        printf("\nMatrix : %d\n",i);
        for(int j = 0 ; j < 3; j++){
            for(int k = 0 ; k < 4; k++){
                printf("%d",a[i][j][k]);
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}