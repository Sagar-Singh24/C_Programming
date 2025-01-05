#include <stdio.h>

int main()
{
    int arr1[size][size],arr2[size][size];

    printf("Input the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Input %d elements in the array in ascending order:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int value;
    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("The existing array list is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    insertValue(arr, &size, value);

    printf("\nAfter Insert the list is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
