#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    int ch;
    printf("Enter source file name: ");
    scanf("%99s", sourcePath);

    printf("Enter destination file name: ");
    scanf("%99s", destPath);
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s.\n", sourcePath);
        exit(EXIT_FAILURE);
    }

    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Cannot open destination file %s.\n", destPath);
        fclose(sourceFile); 
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n"); 

    return 0;
}
U