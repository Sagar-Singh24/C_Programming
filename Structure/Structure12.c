#include<stdio.h>
#include<math.h>
    struct point
    {
        float x;
        float y;
    };
int main()
{
    float dist;

    struct point point;
    printf("Enter point in x-axis: ");
    scanf("%f",&point.x);
    printf("Enter point in y-axis: ");
    scanf("%f",&point.y);

    dist=sqrt((point.x*point.x)+(point.y*point.y));
    printf("\nDistance of point from origin = %.2f",dist);
    printf("\n\n");

    return 0;
}