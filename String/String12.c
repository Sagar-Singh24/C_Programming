
#include <stdio.h>
#include <string.h>

    int main()
    {
    char str[100];
    char substring[100];

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Input the substring to be searched: ");
    fgets(substring, sizeof(substring), stdin);
    str[strcspn(str, "\n")] = '\0';
    substring[strcspn(substring, "\n")] = '\0';

    if (strstr(str, substring) != NULL)
    {
        printf("The substring exists in the string.\n");
    }
    else
    {
        printf("The substring does not exist in the string.\n");
    }

    return 0;
}
