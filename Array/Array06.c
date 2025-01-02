#include <stdio.h>

int main() {
    int n, i;
    
    // Input the number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    // Declare an array of size n
    int arr[n];
    
    // Input elements into the array
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Loop through the array to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // Print the maximum and minimum elements
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
