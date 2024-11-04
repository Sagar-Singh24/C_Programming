#include <stdio.h>
struct student
{
    int Maths;
    int Phy;
    int PS;
    int BEE;
};
int main()
{
    struct student s;
    printf("Enter Maths Marks: ");
    scanf("%d", &s.Maths);
    printf("Enter Phy Marks: ");
    scanf("%d", &s.Phy);
    printf("Enter PS Marks: ");
    scanf("%d", &s.PS);
    printf("Enter BEE Marks: ");
    scanf("%d", &s.BEE);

    int Sum = (s.Maths + s.Phy + s.PS + s.BEE) / 4;
    printf("Total Marks %d", Sum);
    if (Sum > 90)
        printf("\nStudent got O Grade");
    else if (Sum < 90 && Sum > 80)
        printf("\nStudent got E Grade");
    else
        printf("\nStudent got A Grade");

    return 0;
}