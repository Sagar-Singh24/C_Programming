#include<stdio.h>
void main()
{
    #define SIZE 25
    int i,count=0;
    char name[SIZE];
    printf("Name = %s\n",name);
    fgets(name,sizeof(name),stdin);
    for(i=0;name[i]!='\0';i++)
    {
    count++;
    if(name[i]=='\n')
    count--;
    }
    printf("Total Size=%d\n",count);
}