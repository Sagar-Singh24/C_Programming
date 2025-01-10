#include <stdio.h>
struct Distance
{
   int feet;
   int inch;
};
int main()
{
   struct Distance d1 = {5, 12};
   struct Distance d2 = {6, 5};
   struct Distance sum;
   sum.feet = d1.feet + d2.feet;
   sum.inch = d1.inch + d2.inch;
   if (sum.inch >= 12)
   {
      sum.inch = 12;
      sum.feet++;
   }
   printf("Total distance : %d feet %d inches \n", sum.feet, sum.inch);
   return 0;
}
