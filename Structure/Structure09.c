#include <stdio.h>
struct Rectangle
{
    float length;
    float width;
};
float calculate_Area(struct Rectangle r)
{
    return r.length * r.width;
}
int main()
{
    struct Rectangle myRectangle;

    printf("Enter length: ");
    scanf("%f", &myRectangle.length);

    printf("Enter width: ");
    scanf("%f", &myRectangle.width);

    float area = calculate_Area(myRectangle);

    printf("The area is %.2f square units\n", area);

    return 0;
}
