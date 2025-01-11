#include <stdio.h>
struct complex
{
    float real;
    float imaginary;
};
int main()
{
    float sum1 = 0, sum2 = 0;
    struct complex comp[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\nComplex Number %d:\n", i + 1);
        printf("Enter real part: ");
        scanf("%f", &comp[i].real);
        printf("Enter imaginary part: ");
        scanf("%f", &comp[i].imaginary);
    }
    for (int i = 0; i < 2; i++)
    {
        sum1 = sum1 + comp[i].real;
        sum2 = sum2 + comp[i].imaginary;
    }
    printf("\nSum of complex number is %.2f + %.2fi\n", sum1, sum2);

    return 0;
}
