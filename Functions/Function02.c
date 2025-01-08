#include<stdio.h>

int func(int);

int main()
{
int no, square;

printf("Enter an no : ");
scanf("%d",&no);

square = func(no);

printf("Square of no is : %d ", square);
}

int func(int temp)
{
return temp*temp;
}
