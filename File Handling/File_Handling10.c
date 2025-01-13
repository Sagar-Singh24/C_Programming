//READ THE LINE 
#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("sagar.txt","r");
    char str[50];
    fgets(str,50,fp);
    {
    printf("%s",str);
    }
    fclose(fp);
    }
 
