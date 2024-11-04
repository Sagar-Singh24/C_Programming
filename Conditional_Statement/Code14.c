#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter the three number ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater");
        }
    }
    else
    {
        printf("\nb is greater");
    }
    if(c>a)
    {
        if(b>c)
        {
        printf("b is greater");
    }
    else
    {
        printf("\nc is greater");
    }
    }
    return 0;

}