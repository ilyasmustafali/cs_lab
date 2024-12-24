#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceFileName[100], targetFileName[100];
    int count = 0;
    char words[1000];

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter the target file name: ");
    scanf("%s", targetFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Could not open file %s for reading.\n", sourceFileName);
        return 1;
    }

    targetFile = fopen(targetFileName, "w");
    if (targetFile == NULL) {
        printf("Could not open file %s for writing.\n", targetFileName);
        fclose(sourceFile);
        return 1;
    }

    int i = 0;
    while (fscanf(sourceFile, "%c", words) == 1) {
        if(words[i] == ' ')
        count++;
    }

    fprintf(targetFile, "%d", ++count);

    printf("Numbers copied from %s to %s successfully.\n", sourceFileName, targetFileName);

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}