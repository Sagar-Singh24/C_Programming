#include <stdio.h>

int main()
{
    int size, i, pos;
    printf("Input the size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Input %d elements in the array in ascending order:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Input the position where to delete: ");
    scanf("%d", &pos);

    if (pos >= 1 && pos <= size)
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("The new list is : ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid position\n");
    }

    return 0;
}
