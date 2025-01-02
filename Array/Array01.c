#include <stdio.h>
int main()
{
    int marks_Array[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("\nEnter Marks:");
        scanf("%d", &marks_Array[i]);
        marks_Array[i] = marks_Array[i] + 10;
    }
    int count = 0, count1 = 0 ;
    for (int i = 0; i <= 9; i++)
    {
        if (marks_Array[i] <= 25)
        {
            count = count + 1;
        }
        else if (marks_Array[i] >= 90 && marks_Array[i] <= 100)
        {
            count1 = count1 + 1;
        }
    }
    printf("\nStudent with O grade:%d",count1);
    printf("\nTotal no of student failed:%d",count);
    return 0;
}