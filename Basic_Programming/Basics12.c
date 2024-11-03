// Swapping Numbers

#include<stdio.h>
int main()
{
    int x = 5*5, y = 12*12, temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
   return 0;
}