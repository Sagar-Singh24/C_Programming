#include <stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; ++i)
    {
        printf(" element-%d:",i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements you entered are :\n");
    for (int i = 0; i < n; ++i) {
        printf("element - %d : %d\n", i, *(arr + i));
    }

    return 0;
}
