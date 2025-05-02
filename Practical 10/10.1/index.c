#include <stdio.h>

int main(){
    char name[20], subjectName[20];
    FILE *ifp, *ofp;
    ifp = fopen("input.txt", "r");
    ofp = fopen("output.txt", "w+");

    if (ifp == NULL || ofp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the first line from the file
    fscanf(ifp, "%s", name);
    fscanf(ifp, "%s", subjectName);

    // Print the read values
    printf("Name: %s\n", name);
    printf("Subject Name: %s\n", subjectName);

    // Write new values to the file
    fprintf(ofp, "Janvi\n");
    fprintf(ofp, "Mathematics\n");

    
    // Close the file
    fclose(ifp);
    fclose(ofp);
    return 0;
}