// Swapping Numbers

#include<stdio.h>
int main() 
{

   int x, y, z;
   printf("Enter the value of x and y: ");
   scanf("%d %d", &x, &y);
   z = x;
   x = y;
   y = z;
   printf("Exchange position of Jyo's :- square %d\n", x);
   printf("Exchanged position of Rebecca :- square %d", y);

   return 0; 
}