#include <stdio.h>

int max(int , int, int);

int main(){
    int n = 10, m = 14, o = 17;
    int maxValue = max(n, m, o);
    printf("The maximum value is: %d\n", maxValue);
    return 0;
}

int max(int x, int y , int z){
    if(x > y && x > z){
        return x;
    } else if(y > x && y > z){
        return y;
    } else {
        return z;
    }
}