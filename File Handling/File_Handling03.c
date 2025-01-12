//Program to Read multiple line from a file
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","w");
    char str[50];
    while(fgets(str,50,fptr)) {
        printf("Input thr file name to be opened :");
        fgets(str,50,stdin);
        printf("%s",str);
    }
    fclose(fptr);
    return 0;
}