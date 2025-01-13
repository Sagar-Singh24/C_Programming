//Program to Read multiple line from a file
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Sagar.txt","r");
    char str[50];
    if(fptr!=NULL){
    while(fgets(str,50,fptr)) {
        printf("Output: %s",str);
    }
    }
    else{
        printf("File name not found");
    }
    fclose(fptr);
    return 0;
}