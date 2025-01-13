//TO CREATE AND STORE THE FILE AND LINE 
#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("sagar.txt","w");
    fprintf(fp,"MY NAME IS SAGAR SINGH.\n");
    fprintf(fp,"I AM STUDING IN CV RAMAN.\n");
    fprintf(fp,"NOW I AM DOING B TECH 1ST YEAR. \n");
    fprintf(fp,"FEEL PROUD OF MY COLLEGE. \n");
    
}