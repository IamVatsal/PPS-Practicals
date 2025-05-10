#include <stdio.h>

union Student{
    char name[20];
    char subjectName[20];
    float percentage;
};


int main(){
    union Student student[3];

    for(int i = 0; i < 3; i++){
        printf("\nEnter Name of Student %d: ",i+1);
        scanf("%s", student[i].name);
        printf("Enter Subject of Student %d: ",i+1);
        scanf("%s", student[i].subjectName);
        printf("Enter Percentage of Student %d: ",i+1);
        scanf("%f", &student[i].percentage);
    }

    for(int i = 0; i < 3; i++){
        printf("\nStudent Name: %s\n", student[i].name);
        printf("Subject Name: %s\n", student[i].subjectName);
        printf("Percentage: %.2f\n", student[i].percentage);
    }

    return 0;
}