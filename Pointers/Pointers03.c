#include <stdio.h>
int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    int *ptrM;
    float *ptrFx;
    char *ptrCht;
    ptrM = &m;ptrFx = &fx;ptrCht = &cht;

    printf("Using & operator :\n");
    printf("address of m = %x\n",&m);
    printf("address of fx = %x\n",&fx);
    printf("address of cht = %x\n",&cht);
    printf("\n");
    printf("Using & and * operator :\n");
    printf("value at address of m = %d\n",m);
    printf("value at address of fx = %f\n",fx);
    printf("value at address of cht = %c\n",cht);
    printf("\n");
    printf("Using only pointer operator :\n");
    printf("value at address of m = %d\n", *ptrM);
    printf("value at address of fx = %f\n", *ptrFx);
    printf("value at address of cht = %c\n", *ptrCht);

    return 0;
}
