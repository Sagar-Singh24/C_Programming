#include <stdio.h>

int main()
{
    int productivity_score;

    printf("Enter the productivity score: ");
    scanf("%d", &productivity_score);

    if (productivity_score >= 90)
    {
        printf("Excellent performance!\n");
    }
    else if (productivity_score >= 80)
    {
        printf("Good performance.\n");
    }
    else if (productivity_score >= 70)
    {
        printf("Satisfactory performance.\n");
    }
    else if (productivity_score >= 60)
    {
        printf("Needs improvement.\n");
    }

    return 0;
}
