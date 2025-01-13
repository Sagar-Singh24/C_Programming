//COUNT THE NUMBER OF LINE
#include <stdio.h>
int main() 
{
    FILE *file;
    char filename[100];
    int count = 0;
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("Error opening file!\n");
        return 1; 
    }
    // Count lines in the file
    while ((ch = fgetc(file)) != EOF) 
    {
        if (ch == '\n') 
        {
            count++;
        }
    }
    fclose(file);
    printf("Number of lines in the file: %d\n", count);
    return 0; 
}
