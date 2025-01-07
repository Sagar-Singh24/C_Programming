#include <stdio.h>

int main()
{
    char firstString[100];
    char secondString[100];

    printf("Input the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    printf("Input the second string: ");
    fgets(secondString, sizeof(secondString), stdin);

    firstString[strcspn(firstString, "\n")] = '\0';
    secondString[strcspn(secondString, "\n")] = '\0';

    char result[200];
    snprintf(result, sizeof(result), "%s %s", firstString, secondString);

    printf("The string is:\n%s\n", result);

    return 0;
}

