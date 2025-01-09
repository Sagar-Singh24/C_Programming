#include <stdio.h>
int main()
{
    int num1, num2,sum;
    int *ptrNum1, *ptrNum2, *ptrNum3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    ptrNum1 = &num1;
    ptrNum2 = &num2;

    sum = *ptrNum1 + *ptrNum2;
    printf("The sum of the entered numbers is : %d\n",sum);
    return 0;
}
