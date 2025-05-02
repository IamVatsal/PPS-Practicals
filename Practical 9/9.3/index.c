#include <stdio.h>

union Student{
    char name[20];
    char subjectName[20];
    float percentage;
};


int main(){
    union Student student[3];
    FILE *fp;
    fp = fopen("temp.txt", "r");

    for(int i = 0; i < 3; i++){
        fscanf(fp,"%s", student[i].name);
        fscanf(fp,"%s", student[i].subjectName);
        fscanf(fp,"%f", &student[i].percentage);
    }

    for(int i = 0; i < 3; i++){
        printf("Student Name: %s\n", student[i].name);
        printf("Subject Name: %s\n", student[i].subjectName);
        printf("Percentage: %.2f\n", student[i].percentage);
    }

    fclose(fp);
    return 0;
}