// Function without return type
#include <stdio.h>
void fun(int *P1, int *P2);//Function Prototype
int main()
{
    int a = 7;
    int b = 9;
    int *pt1, *pt2;
    pt1 = &a; pt2 = &b;
    printf("Value before function call: %d,%d\n", a, b);

    fun(pt1, pt2);//Function Call
    printf("Value after function call:%d,%d\n", a, b);
    return 0;
} // End of Main

// First put returntype
void fun(int *P1, int *P2)//Function Defination
{
    *P1 = *P1 + 10;
    *P2 = *P2 + 10;
    printf("Value inside function:%d,%d\n", *P1, *P2);
} // End of Function
