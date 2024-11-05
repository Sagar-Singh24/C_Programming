// Table Formation

#include<stdio.h>
int main()
{
    int num,mult,i;
    printf("Enter Number: ");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        mult=num*i;
       printf("%d*%d=%d\n",num,i,mult);
    }
    return 0;
}
