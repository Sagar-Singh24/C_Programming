#include <stdio.h>
int main()
{
    int size, arr1[size][size], arr2[size][size];
    printf("Input the size of the square matrix(less than 5): ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("For first array enter element-[%d][%d]", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("For second array enter element-[%d][%d]", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("First matrix is: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", arr1[i][j]);
        }
    }
    printf("Second matrix is: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", arr2[i][j]);
        }
    }
    printf("The addition of two matrix is: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", sum[i][j]);
        }
    }
    return 0;
}
