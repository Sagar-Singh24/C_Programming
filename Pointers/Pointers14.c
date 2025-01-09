//Addition of two array using poiners

#include<stdio.h>
int main()
{
    int arr1[4]={7,11,21,51};
    int arr2[4]={10,20,30,40};
    int arr3[4];
    int *Ptr1,*Ptr2,*Ptr3; 
    Ptr1=&arr1[0];
    Ptr2=&arr2[0];
    Ptr3=&arr3[0];
    for(int i=0;i<4;i++)
    {
        *Ptr3=*Ptr1+*Ptr2;
        Ptr1++;
        Ptr2++;
    printf("%d ",*Ptr3);
    Ptr3++;
    }
    return 0;
}