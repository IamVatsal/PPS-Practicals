#include <stdio.h>

struct Game{
    char team_Name[20];
    char player_name[20];
    int score;
};

int main(){
    struct Game Player[3];

    for(int i = 0; i < 3; i++){
        printf("Enter Name of Team %d : ",i+1);
        scanf("%s", Player[i].team_Name);
        printf("Enter Name of Player %d of Team %d: ",i+1,i+1);
        scanf("%s", Player[i].player_name);
        printf("Enter Score of Player %d of Team %d: ",i+1,i+1);
        scanf("%d", &Player[i].score);
    }

    for(int i = 0;i < 3; i++){
        printf("\nTeam Name: %s\n", Player[i].team_Name);
        printf("Player Name : %s\n", Player[i].player_name);
        printf("Player Score : %d\n", Player[i].score);
    }
    return 0;
}