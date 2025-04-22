#include <stdio.h>

struct Student {
    long int enroll;
    char name[20];
    float marks1;
    float marks2;
};


int main(){
    struct Student students[3];

    for (int i = 0 ; i < 3 ; i++){
        printf("Enter enrollment number of %d: ", i+1);
        scanf("%ld", &students[i].enroll);
        printf("Enter name of %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter marks 1 of %d: ", i+1);
        scanf("%f", &students[i].marks1);
        printf("Enter marks 2 of %d: ", i+1);
        scanf("%f", &students[i].marks2);
    }

    for (int i = 0 ; i < 3 ; i++){
        printf("\nEnrollment number: %ld\n", students[i].enroll);
        printf("Name: %s\n", students[i].name);
        printf("Marks 1: %.2f\n", students[i].marks1);
        printf("Marks 2: %.2f\n", students[i].marks2);
        printf("Percentage: %.2f%%\n", students[i].marks2+students[i].marks1/2);
    }
    return 0;
}