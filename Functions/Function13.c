// Function with return type
#include <stdio.h>
int add(int X, int Y);//Function Prototype
int main()
{
    int a = 7;
    int b = 9;

    int Result=add(a,b); // Function Call
    printf("Addition is:%d\n", Result);
    return 0;
} // End of Main

// First put returntype
int add(int X, int Y)//Function Defination
{
    int R;
    R = X + Y;
    return R;
} // End of Function
