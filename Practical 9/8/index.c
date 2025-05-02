#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    
    printf("What will be Lenght of String? : ");
    scanf("%d", &a);

    int *ptr = (int*)malloc(a*sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated\n");
        return 0;
    }
    for(int i = 0; i < a; i++){
        printf("Enter value of %d: ", i+1);
        scanf("%d", ptr+i);
    }
    printf("\nValues in array are:\n");
    for(int i = 0; i < a; i++){
        printf("Value of %d is %d\n", i+1, *(ptr+i));
    }
    printf("Size of ptr is %d\n", sizeof(ptr));
}