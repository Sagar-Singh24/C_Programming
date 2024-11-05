// Counting of Numbers

#include<stdio.h>
int main(){
    int num,count=0,digit;
    printf("Enter Numbers: ");
    scanf("%d",&num);
    while(num!=0)
    {
       digit=num%10;
       count=count+1;
       num=num/10;
    }
    printf("Number of count:%d",count);
    return 0;
}
