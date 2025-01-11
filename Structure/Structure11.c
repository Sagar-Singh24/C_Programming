
#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int marks;
};
int main()
{
    struct Student students[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s",students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d",&students[i].marks);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d, Name: %s, marks: %d\n", i+1, students[i].name, students[i].marks);
    }
    return 0;
}
