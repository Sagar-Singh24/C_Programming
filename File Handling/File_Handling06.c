//Program to Read single line from a file
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sagar.txt","r");
    char str[50];
    fgets(str,50,fptr);
    printf("Output: %s",str);
    fclose(fptr);
    return 0;
}