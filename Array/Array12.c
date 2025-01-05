#include <stdio.h>

int main() {
    int array1[100], array2[100], i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in array1:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }
    for(i = 0; i < n; i++) {
        array2[i] = array1[i];
    }
    printf("\nThe elements in the array2:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}
