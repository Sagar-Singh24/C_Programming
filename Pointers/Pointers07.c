#include <stdio.h>
int main()
{
 int a,b,*ptr1=&a,*ptr2=&b;
 
   printf("pointer: Find the maximum number between two numbers :\n"); 
   printf("\n");   
 
   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2); 

    if(*ptr1>*ptr2)
    {
     printf("\n %d is the maximum number.\n\n",*ptr1);
    }
    else
    {
    printf("\n %d is the maximum number.\n\n",*ptr2);
    }
    return 0;
}