#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int start, length;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Input the position to start extraction: ");
    scanf("%d", &start);

    printf("Input the length of substring: ");
    scanf("%d", &length);

    if (start >= 0 && length > 0 && start + length <= strlen(str))
    {
        char substring[100];
        strncpy(substring, str + start, length);
        substring[length] = '\0';

        printf("The substring retrieved from the string is: \"%s\"\n", substring);
    }
    else
     {
        printf("Invalid input. Please check the position and length.\n");
     }

    return 0;
}

