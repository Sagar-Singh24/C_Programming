//Program to write in a file
#include<stdio.h>
int main()
{
    char mode[50];
    FILE *fptr;
    fptr=fopen("test.txt","w");
    printf("Input Sentence for a file :");
    fgets(mode,50,stdin);
    if(fptr!=NULL)
    {
        
        fprintf(fptr,mode);
        printf("\nThe file test.txt created successfully...!");
    }
    fclose(fptr);
    return 0;
}