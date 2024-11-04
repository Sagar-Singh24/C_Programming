// Eligibility for vote

#include <stdio.h>
int main()
{
    int age;
    printf("Age of a Candidate: ");
    scanf("%d", &age);
    if (age >=23)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else
    {
        printf(" You are not eligible for casting your vote.");
    }
    return 0;
}