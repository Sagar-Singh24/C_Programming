#include <stdio.h>
#define PASSING_THRESHOLD 100
int main() 
{
    int student1 = 75;
    int student2 = 45;

    if (student1 < PASSING_THRESHOLD)
     {
        printf("Student 1: %d (below passing threshold)\n", student1);
    }

    if (student2 < PASSING_THRESHOLD)
     {
        printf("Student 2: %d (below passing threshold)\n", student2);
    }

    return 0;
}
