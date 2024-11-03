// Swapping Number

#include <stdio.h>
int main()
{
    int a = 10;
    int b = 15;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Swapped Value of Alice's coins: %d\n", a);
    printf("Swapped Value of Bob's coins: %d\n", b);

    return 0;
}
