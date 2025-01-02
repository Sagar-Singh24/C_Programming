#include <stdio.h>

int main() {
    int size, i, pos;
    
    // Input the size of array
    printf("Input the size of array : ");
    scanf("%d", &size);
    
    // Declare the array
    int arr[size];
    
    // Input elements in ascending order
    printf("Input %d elements in the array in ascending order:\n", size);
    for(i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Input the position to delete
    printf("Input the position where to delete: ");
    scanf("%d", &pos);
    
    if(pos >= 1 && pos <= size) {
        // Shift elements to the left to delete the desired element
        for(i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i+1];
        }
        size--; // Decrease the size of the array
        
        // Print the new list
        printf("The new list is : ");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid position\n");
    }

    return 0;
}
