
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int charCount = 0, wordCount = 0, inWord = 0;
    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("File not found or unable to open.\n");
        return 1; 
    }
    while ((ch = fgetc(file)) != EOF) 
    {
        charCount++;
        if (ch == ' ' || ch == '\n' || ch == '\t') 
        {
            inWord = 0;
        } else {
            if (!inWord) 
            {
                inWord = 1; 
                wordCount++;
            }
        }
    }
    fclose(file);
    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    return 0;
}
