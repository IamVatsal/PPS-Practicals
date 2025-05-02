#include <stdio.h>

int main(){
    char str[]  = "Hello World!";
    FILE *fp;
    // Open File 
    fp = fopen("b.txt","w");

    // Write To File
    fputs(str,fp);

    // Close File
    fclose(fp);
    
    return 0;
}