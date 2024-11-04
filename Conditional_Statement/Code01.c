// Number is positive or negative

#include <stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }
    return 0;
}