#include <stdio.h>

// Function declaration
int calculateTotal(int a, int b);

int main() {
    // Function call
    int result = calculateTotal(7, 8);

    // Output
    printf("The total is: %d", result);

    return 0;
}

// Function definition
int calculateTotal(int a, int b)
{
    int total=a+b;
   return total;
}
