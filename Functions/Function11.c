// Function with return type
#include <stdio.h>

int add(int *pt, int a);//Function Prototype
int main()
{
    int a=5;
    int arr[5]={7,9,11,21,51};
    int Result = add(arr, a); // Function Call
    printf("Array Addition:%d\n", Result);
    return 0;
} // End of Main

// First put returntype
int add(int *pt, int a)//Function Defination
{
    int R=0;
    for(int i=0; i<5; i++)
    {
        R = R + *pt;
        pt++;
    }
    return R;
} // End of Function
