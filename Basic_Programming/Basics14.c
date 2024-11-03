// Finding Distance using Equation of Motion.

#include<stdio.h>
int main(){
  float u, a, d;
  int t;

  printf("\nEnter the value of a : ");
  scanf("%f", & a);

  printf("\nEnter the value of u : ");
  scanf("%f", & u);

  printf("\nEnter the value of t : ");
  scanf("%d", & t);

  d = (u * t) + (a * t * t) / 2;

  printf("\n The Distance : %.2f", d);

  return 0;
}