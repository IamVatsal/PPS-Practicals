#include <stdio.h>

int main(){
    char str[11];
    int n = sizeof(str)/sizeof(str[1]);
    FILE *ifp;
    
    // Open File
    ifp = fopen("c.txt","r");

    // Close File
    fgets(str,n,ifp);

    printf("%s",str);
    
    return 0;
}