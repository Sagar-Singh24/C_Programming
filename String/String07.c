#include <stdio.h>

int main()
{
    char str[100];
    char charToRemove;
    char result[100];
    int i, j;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Character to Remove: ");
    scanf(" %c", &charToRemove);

    j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != charToRemove)
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}

