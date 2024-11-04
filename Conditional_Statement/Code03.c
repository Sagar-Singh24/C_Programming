// Leap Year

#include <stdio.h>
int main()
{
    int day, year;
    printf("Enter Day in februry: ");
    scanf("%d", &day);

    if (day >= 1 && day <= 29)
    {

        printf("this belong to leap year ");
    }

    else
    {
        printf("this not belongs to leap year ");
    }

    printf("Enter Year\n");
    scanf("%d", &year);

    if ((year % 400) == 0 || (year % 100) != 0 && (year % 4) == 0)
    {
        printf("this is leap year");
    }
    else
    {
        printf("this not belongs to leap year");
    }

    return 0;
}