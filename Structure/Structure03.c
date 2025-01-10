#include<stdio.h>
int main(){
struct student
{
    char Name[20];
    float Marks;
    char grade;
    int att;
};
struct student S[3];
for(int i=0;i<3;i++)
{
    printf("Enter the name of Student : ");
    scanf("%s %f %c %d",S[i].Name,&S[i].Marks,&S[i].grade,&S[i].att);
}
for(int j=0;j<3;j++)
{
    if(S[j].att<75)
printf("Less Attendence : %s %f %c %d\n",S[j].Name,S[j].Marks,S[j].grade,S[j].att);
}
return 0;
}