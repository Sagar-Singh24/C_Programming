#include <stdio.h>
#include<stdlib.h>
int main(){
    int num;
    float *data;
    printf("Enter the total number of elements: ");
    scanf("%d", &num);

    // Allocating memory for num elements
    data = (float *)calloc(num, sizeof(float));
    if (data == NULL) {
        printf("Error!!! memory not allocated.");
    }

    // Storing numbers entered by the user.
    for (int i = 0; i < num; ++i) {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", data + i);
    }

    // Finding the largest number
    for (int i = 1; i < num; ++i) {
        if (*data < *(data + i))
            *data = *(data + i);
    }
    printf("Largest number = %.2f", *data);

    return 0;
}