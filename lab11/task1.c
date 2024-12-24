#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceFileName[100], targetFileName[100];
    int number;

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

    while (fscanf(sourceFile, "%d", &number) == 1) {
        fprintf(targetFile, "%d\n", number);
    }

    printf("Numbers copied from %s to %s successfully.\n", sourceFileName, targetFileName);

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}