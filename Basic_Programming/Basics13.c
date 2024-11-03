// Perimeter and Area of Rectangle.

#include<stdio.h>
int main(){
    float l, b, Perimeter, Area;
  
  printf("\nEnter sides of rectangle\n");
  scanf("%f%f",&l,&b);
   
  Perimeter = 2*(l+b);
  Area = l*b;
   
  printf("\n Perimeter of rectangle= %.2f\n", Perimeter);
  printf("\n Area of rectangle = %.2f\n",Area);
  return 0;

}