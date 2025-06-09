#include <stdio.h>

typedef struct {
    int Unit;
} Student;


int main(){
    Student s1;
    s1.Unit = 10;
    printf("%d",s1.Unit);
    return 0;
}