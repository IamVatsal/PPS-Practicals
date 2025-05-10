#include <stdio.h>

int main(){
    int arr[5];
    int *ptr = arr;
    // FILE *fp;
    // fp = fopen("int.txt", "r");

    for(int i = 0 ;i < 5; i++){
        printf("Enter value of %d: ", i+1);
        scanf("%d", ptr+i);
        // fscanf(fp,"%d", ptr+i);
    }
    printf("\nValues in array are:\n");
    for(int i = 4 ;i >= 0; i--){
        printf("%d ", *(ptr+i));
    }
    return 0;
}