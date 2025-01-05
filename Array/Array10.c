#include <stdio.h>

int main()
{
    int arr[20];
    printf("Input 20 elements in the array:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are:");
    for (int i = 0; i < 20; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}
