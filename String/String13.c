#include <stdio.h>
#include <ctype.h>

int main()
 {
    char sentence[1000];

    printf("Input the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("The given sentence is: %s", sentence);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (islower(sentence[i]))
        {
            sentence[i] = toupper(sentence[i]);
        }
    else if (isupper(sentence[i]))
        {
            sentence[i] = tolower(sentence[i]);
        }
    }

    printf("After case change, the string is: %s", sentence);

    return 0;
}

