#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello World!";
    int len = strlen(str), count = 0;
    for (int i = 0; i < len; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }

    printf("Vowels in String : %d\n", count);
    return 0;
}