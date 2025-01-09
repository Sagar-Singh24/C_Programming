#include<stdio.h>
int main()
{
    int Marks[0]={20,30,40,50};
    int *Ptr;
    Ptr=&Marks[0];
    for(int i=0;i<4;i++)
    {
        *Ptr = *Ptr + 10;
        printf("%d",*Ptr);
        Ptr++; 
    }

}