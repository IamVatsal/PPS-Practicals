#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char str[] = "Hello World!",str1[11];
    char str2[] = " Hello World!";
    printf("Enter Number :");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("String Len: %d", strlen(str));
            break;
        case 2:
            printf("String Upr: %s", strupr(str));
            break;
        case 3:
            printf("String Lwr: %s", strlwr(str));
            break;
        case 4:
            printf("String Rev: %s", strrev(str));
            break;
        case 5:
            strcpy(str1,str);
            printf("String Copy: %s", str1);
            break;
        case 6:
            strcat(str,str2);
            printf("String Cat: %s", str);
            break;
        case 7:
            printf("String Cmp: %d", strcmp(str,str1));
            break;

    }
    return 0;
}