#include <stdio.h>

int main(){

    printf("char          = %lu\n", sizeof(char));
    printf("int           = %lu\n", sizeof(int));
    printf("float         = %lu\n", sizeof(float));
    printf("double        = %lu\n", sizeof(double));
    printf("short int     = %lu\n", sizeof(short int));
    printf("long int      = %lu\n", sizeof(long int));
    printf("long long int = %lu\n", sizeof(long long int));
    printf("unsigned int  = %lu\n", sizeof(unsigned int));
    printf("unsigned char = %lu\n", sizeof(unsigned char));
    printf("unsigned long = %lu\n", sizeof(unsigned long));

    return 0;
}