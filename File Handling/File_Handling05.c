//Program to append in a file
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sagar.txt","a");
    fprintf(fptr,"\nGood Morning to all of you");
    fclose(fptr);
    return 0;
}