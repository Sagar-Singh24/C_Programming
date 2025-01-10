#include<stdio.h>
int main(){
struct Book
{
    char BookName[20];
    float price;
    int pages;
};
struct Book  S[3];
for(int i=0;i<3;i++)
{
    printf("Enter the name of the book : ");
    scanf("%s %f %d",S[i].BookName,&S[i].price,&S[i].pages);
}
for(int j=0;j<3;j++)
{
    if(S[j].pages>500)
printf(" Fat Book : %s %f %d\n",S[j].BookName,S[j].price,S[j].pages);
    }
return 0;
}