
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char fileName[100] = " ";
    printf("Please enter your text file as 'textfile.txt'\n");
    scanf("%s", &fileName);

    FILE * filePointer;
    filePointer = fopen(fileName, "r");

    char singleLine[500];

    int character;
    int whitespaceCount = 0;

    while ( (character = fgetc(filePointer)) != EOF) {
        if (isspace(character)) { // the "isspace" function checks of the current character is whitespace
            whitespaceCount++;
        }
    }
    printf("Amount of whitespace = %d", whitespaceCount);

    fclose(filePointer);

    return 0;
}