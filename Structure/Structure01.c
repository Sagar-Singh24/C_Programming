#include<stdio.h>
int main(){
struct student
{
    char Name[20];
    float Marks;
    char grade;
};
struct student s1 = {"Ram",100,'O'};
s1.Marks = s1.Marks + 10;
struct student s2 = {"Sagar",89,'E'};
s2.grade = 'O';
prinf("%s",s2.Name)
struct student S[3];
    scanf("%s %f %c",S[i].Name,&S[i].Marks,&S[i].grade);
return 0;
}