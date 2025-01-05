#include <stdio.h>

void insertValue(int arr[], int *size, int value) {
    int i, j;
    
    // Find the position to insert the value
    for(i = 0; i < *size; i++) {
        if(arr[i] > value)
            break;
    }

    // Shift the elements to make space for the new value
    for(j = *size; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the value at the correct position
    arr[i] = value;

    // Increase the size of the array
    (*size)++;
}

int main() {
    int size, i;

    printf("Input the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Input %d elements in the array in ascending order:\n", size);
    for(i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int value;
    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("The existing array list is : ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Insert the value into the array
    insertValue(arr, &size, value);

    printf("\nAfter Insert the list is : ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
