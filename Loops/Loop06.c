#include <stdio.h>
int main()
{
    int row,col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 5; col>=row;col--)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
