#include<stdio.h>
int main()
{
    int size;
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &size);

    int M1[size][size], M2[size][size], sum[size][size];

    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }
    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &M2[i][j]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum[i][j] = M1[i][j] + M2[i][j];
        }
    }
    printf("The First matrix is:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", M1[i][j]);
        }
        printf("\n");
    }
    printf("The Second matrix is:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", M2[i][j]);
        }
        printf("\n");
    }

    printf("The Addition of two matrices is:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}