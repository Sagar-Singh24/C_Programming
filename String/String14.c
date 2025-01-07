#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sentence[1000];
    char word[100];
    int frequency = 0;

    printf("Input the string: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Input the word to count: ");
    scanf("%s", word);

    for (int i = 0; sentence[i]; i++)
    {
        sentence[i] = tolower(sentence[i]);
    }
    for (int i = 0; word[i]; i++)
    {
        word[i] = tolower(word[i]);
    }
    char *position = sentence;
    while ((position = strstr(position, word)) != NULL)
    {
        frequency++;
        position += strlen(word);
    }

    printf("The frequency of the word '%s' is: %d\n", word, frequency);

    return 0;
}

