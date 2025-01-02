#include <stdio.h>

int main() {
    int array1[100], array2[100], i, n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the source array
    printf("Enter the elements in array1:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    // Copy elements from sourceArray to targetArray
    for(i = 0; i < n; i++) {
        array2[i] = array1[i];
    }

    // Print the elements of the target array
    printf("\nThe elements in the array2:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}
