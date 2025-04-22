#include <stdio.h>

struct Game{
    char tName[20];
    char p[3][20];
    int s[3];
};

int main(){
    struct Game games[3];
    int ind,max;
    FILE *fp;
    fp = fopen("temp.txt", "r");

    for(int i = 0; i < 3; i++){
        // printf("Enter Name of Team %d : ",i+1);
        fscanf(fp,"%s", games[i].tName);
        for(int j = 0; j < 3; j++){
        // printf("Enter Name of Player %d of Team %d: ",j+1,i+1);
        fscanf(fp,"%s", games[i].p[j]);
        // printf("Enter Score of Player %d of Team %d: ",j+1,i+1);
        fscanf(fp,"%d", &games[i].s[j]);
        }
    }

    for(int i = 0;i < 3; i++){
        printf("Team Name: %s\n", games[i].tName);
        int max = games[i].s[0];
        ind = 0;
        for(int j = 0; j < 3; j++){
            if(games[i].s[j] > max){
                max = games[i].s[j];
                ind = j;
            }
        }
        printf("Player with highest score in %s is %s with score %d\n", games[i].tName, games[i].p[ind], max);
    }

    return 0;
}