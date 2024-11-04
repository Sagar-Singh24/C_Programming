#include<stdio.h>
int main(){
    int a;

    printf("Enter the number ");
    scanf("%d",&a);
    if((a%5)==0 && (a%11)==0)
    {
        printf("%d is divisible by 5 and 11",a);
    }
        else if((a%5)==0)
        {
            printf("%d divisible by 5",a);
        }
    else if((a%11)==0)
    {
        printf("%d divisible by 11",a);
    }
    else
    {
        printf("%d Not divisible by 5 and 11",a);
    }
    
    return 0;
}
