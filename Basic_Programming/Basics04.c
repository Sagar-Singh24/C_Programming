// Perimeter and Area Of Triangle

#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, Perimeter, s, Area;

  printf("\nEnter sides of Triangle\n");
  scanf("%f%f%f",&a,&b,&c);

  Perimeter = a+b+c;
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("\n Perimeter of Triangle = %.2f\n", Perimeter);
  printf("\n Area of Triangle = %.2f\n",Area);

}
