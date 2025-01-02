#include <stdio.h>
int main()
{
    int arr1[3], arr2[3], arr3[3];
    for (int i = 0; i <= 2; i++)
    {
        printf("\nEnter Marks A:");
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i <= 2; i++)
    {
        printf("\nEnter Marks B:");
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i <= 2; i++)
        arr3[i] = arr1[i] + arr2[i];
    for (int i = 0; i <= 2; i++)
        printf("\nEnter Marks C:%d",&arr3[i]);
    return 0;
}