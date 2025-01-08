#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) 
{
    if (num <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i <= num / 2; ++i) 
    {
        if (num % i == 0) 
        {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main()
 {
    int number;

    // Input from the user
    printf("Input a positive number: ");
    scanf("%d", &number);

    // Check and display the result
    if (isPrime(number)) {
        printf("The number %d is a prime number.", number);
    } else {
        printf("The number %d is not a prime number.", number);
    }
return 0;
}
