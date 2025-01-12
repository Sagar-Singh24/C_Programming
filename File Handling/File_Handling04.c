//Program to write in a file
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sagar.txt","w");
    fprintf(fptr,"Good Morning");
    fclose(fptr);
    return 0;
}