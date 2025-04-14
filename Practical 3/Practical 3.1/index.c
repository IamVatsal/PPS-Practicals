#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Enter numbers a: ");
    scanf("%d", &a);
    printf("Enter numbers b: ");
    scanf("%d", &b);
    printf("Enter numbers c: ");
    scanf("%d", &c);
    printf("Enter numbers d: ");
    scanf("%d", &d);

    printf("%d + %d / %d + %d = %d\n",a,b,c,d,a+b / c+d);
    printf("(%d + %d) * (%d - %d) = %d\n",a,b,a,b,(a+b)*(a-b));
    printf("%d + %d / 2 = %d\n",a,b,a+b/2);
    printf("(%d + %d) / (%d + %d) = %d\n",a,b,c,d,(a+b)/(c+d));
    printf("%d + %d * %d - %d = %d\n",a,b,a,b,a+b*a-b);
    printf("(%d + %d) / 2 = %d\n",a,b,(a+b)/2);
    
    return 0;
}