#include <stdio.h>
int main()
{
    int num, j, i = 1, prime, cheak, num1, num2;
    int count = 0;
    int Diff1, Diff2;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1=num;
    num2=num;
    if (num < 5)
    {
        int fact = 1;
        while (num)
        {
            fact = fact * num;
            num--;
        }
        printf("Factorial is %d", fact);
    }
    else
    {
        while (num != 1)
        {
            num--;
            count = 0;
            while (num1 != 0)
            {
                num1--;
                if (num1 % i == 0)
                {
                    count++;
                }
                i++;
            }
            if (count == 2)
                Diff1 = num - num1;
            break;
        }
        while (num != 1)
        {
            num++;
            count = 0;
            while (num2 != 0)
            {
                num2++;
                if (num2 % i == 0)
                {
                    count++;
                }
                i++;
            }
            if (count == 2)
                Diff2 = num2 - num;
            break;
        }
        if (Diff1 <= Diff2)
            printf("%d", Diff1 * num);
        else
        {
            printf("%d", Diff2 * num);
        }
    }
    return 0;
}