//Program to Read single line from a file
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    char str[50];
    if(fptr!=NULL)
    {
        printf("Input thr file name to be opened :");
        fgets(str,50,stdin);
        fprintf(fptr,str);
        printf("\n The content of the file test.txt is: \nThis is the content of the file.txt is");
    }

    fclose(fptr);
    return 0;
}