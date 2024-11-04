#include <stdio.h>

int main()
{
    char username;
    int accessCode;

    printf("Enter username: \nEnter access code: ");
    scanf("%s %d", &username, &accessCode);

    if (username == 'g')
    {
        if (accessCode == 874321)
        {
            printf("Access granted. Welcome, g\n");
        }
        else
        {
            printf("Invalid access code. Access denied.\n");
        }
    }
    return 0;
}
