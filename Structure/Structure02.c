#include<stdio.h>
int main(){
struct student
{
    char Name[20];
    float Marks;
    char grade;
};
struct student S[3];
for(int i=0;i<3;i++)
{
    printf("Enter the name of Student : ");
    scanf("%s %f %c",S[i].Name,&S[i].Marks,&S[i].grade);
}
for(int j=0;j<3;j++)
{
printf("%s %f %c",S[j].Name,S[j].Marks,S[j].grade);
}
return 0;
}