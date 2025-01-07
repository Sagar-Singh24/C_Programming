#include <stdio.h>
#include <ctype.h>

int main()
 {
    char input[100];
    printf("Enter a lowercase string: ");
    scanf("%s", input);

    for (int i = 0; input[i]; i++)
    {
        input[i] = toupper(input[i]);
    }

    printf("Uppercase form: %s\n", input);

    return 0;
}
