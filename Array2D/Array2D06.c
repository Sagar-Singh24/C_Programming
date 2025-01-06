#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of the square matrix(less than 5): ");
    scanf("%d", &size);
    int arr1[size][size], arr2[size][size]; 
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
    int sub[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("First matrix is:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("The subtraction of two matrix is:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}
