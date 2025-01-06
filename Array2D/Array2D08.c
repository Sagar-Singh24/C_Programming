#include <stdio.h>
void mergeArrays(int arr1[], int arr2[], int size, int result[][size])
{
    int i = 0, j = 0, k = 0;
    while (i < size && j < size)
    {
        if (arr1[i] >= arr2[j])
        {
            result[k / size][k % size] = arr1[i];
            i++;
        }
        else
        {
            result[k / size][k % size] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < size)
    {
        result[k / size][k % size] = arr1[i];
        i++;
        k++;
    }
    while (j < size)
    {
        result[k / size][k % size] = arr2[j];
        j++;
        k++;
    }
}
int main()
{
    int arr1[] = {100,90,70,40,15};
    int arr2[] = {14,13,12,11,10};
    printf("Elements of first array: ");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nElements of second array: ");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr2[i]);
    }
    int size = 5;
    int result[2][size];
    mergeArrays(arr1, arr2, size, result);
    printf("\nMerged 2D Array is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
