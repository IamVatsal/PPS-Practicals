#include <stdio.h>
#include "b.c"

extern int a;

int main (){
    int b;
    static int c;
    register int d;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

    return 0;
}