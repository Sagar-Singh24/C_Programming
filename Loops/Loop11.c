// Prime Number

#include <stdio.h>
int main()
{
    int num, i,a = 0;
    printf("Input  a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            a++;
        }
    }
    if (a == 0 && num != 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    return 0;
}
