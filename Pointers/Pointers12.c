#include<stdio.h>
int main()
{
    int v1=10,v2=21;
    int *Pt1,*Pt2,*Pt3;
    Pt1=&v1;
    Pt2=&v2;
    int sum=*Pt1 + *Pt2;

    printf("Sum is : %d\n",sum);
    Pt3=&sum;
    printf("%d",sum);
    return 0;
}