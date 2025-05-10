#include <stdio.h>
#include <string.h>

struct Game {
    char playerName[50];
    char teamName[50];
    int maxScore;
};

int main() {
    struct Game Player[3];
    int i, j;

    // Input player details
    printf("Enter player details:\n");
    for(i = 0; i < 3; i++) {
        printf("\nPlayer %d\n", i + 1);
        printf("Enter player name: ");
        scanf(" %[^\n]", Player[i].playerName);
        printf("Enter team name: ");
        scanf(" %[^\n]", Player[i].teamName);
        printf("Enter maximum score: ");
        scanf("%d", &Player[i].maxScore);
    }

    int printed[3] = {0, 0, 0}; // to track already printed players
    for(i = 0; i < 3; i++) {
        if(printed[i]) continue;

        printf("\nTeam: %s\n", Player[i].teamName);
        for(j = i; j < 3; j++) {
            if(strcmp(Player[i].teamName, Player[j].teamName) == 0) {
                printf("  Player: %s, Max Score: %d\n", Player[j].playerName, Player[j].maxScore);
                printed[j] = 1;
            }
        }
    }

    return 0;
}
