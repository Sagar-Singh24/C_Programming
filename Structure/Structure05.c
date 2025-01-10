#include <stdio.h>
struct student
{
    char name[50];
    int roll_number;
    int age;
    float total_marks;
};
int main() {
    struct student student;
    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s",student.name);
    printf("Roll number: ");
    scanf("%d", &student.roll_number);
    printf("Age:");
    scanf("%d",&student.age);
    printf("Total marks: ");
    scanf("%f", &student.total_marks);

    printf("\n student details: \n");
    
    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll_number);
    printf("Age: %d\n",student.age);
    printf("Marks: %.1f\n", student.total_marks);

    return 0;
}
