#include<stdio.h>
int main()
{
    int a=10;
    int c=21;
    printf("%d\n",a);
    printf("%x\n",&a);
    int *b;
    b=&c;
    printf("%x\n",b);
    printf("%d\n",*b);

    

    return 0;
}