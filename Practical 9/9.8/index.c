#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    
    printf("What will be Lenght of String? : ");
    scanf("%d", &a);

    char *ptr = (char*)malloc((a+1)*sizeof(char));

    if(ptr == NULL){
        printf("Memory not allocated\n");
        return 0;
    }
    
    printf("Enter String of Char %d: ", a);
    scanf("%*c");
    fgets(ptr, a+1, stdin);

    printf("String is %s\n", ptr);
    printf("Length of String is %zu\n", strlen(ptr));


    // Reallocating memory
    printf("Enter new length of String: ");
    scanf("%d", &a);

    realloc(ptr, (a+1)*sizeof(char));
    if(ptr == NULL){
        printf("Memory not allocated\n");
        return 0;
    }

    printf("Enter String of Char %d: ", a);
    scanf("%*c");
    fgets(ptr, a+1, stdin);

    printf("String is %s\n", ptr);
    printf("Length of String is %zu\n", strlen(ptr));

    free(ptr);
    return 0;
}