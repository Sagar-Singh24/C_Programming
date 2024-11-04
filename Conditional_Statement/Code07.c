#include <stdio.h>

int main()
 {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 65) 
    {
        printf("Congratulations! You are eligible for a senior citizen discount.\n");
    }
     else
     {
        printf("Sorry, you are not eligible for a senior citizen discount.\n");
    }

    return 0;
}
