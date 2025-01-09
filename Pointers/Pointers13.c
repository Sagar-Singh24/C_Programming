#include<stdio.h>
int main()
{
    int v1=10,v2=21,sum;
    int *Pt1,*Pt2,*Pt3;
    Pt1=&v1;
    Pt2=&v2;
    Pt3=&sum;
    *Pt3=*Pt1 + *Pt2;
    printf("Sum is : %d",*Pt3);
    return 0;
}