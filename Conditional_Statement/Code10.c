#include <stdio.h>

int main()
 {
    int dayNumber;

    printf("Enter a day number (1-7): ");
    scanf("%d", &dayNumber);

    if (dayNumber >= 1 && dayNumber <= 7)
     {
        char *dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

        printf("The day is %s.\n", dayNames[dayNumber - 1]);
    }
     else
    {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
