#include <stdio.h>
int main()
 {
    int m = 10;
    int *z;
    z=&m;
    printf("address of m = %x \n",&m);
    printf("address stored in z = %x \n",z);
    printf("value of *z = %d \n",*z);
    return 0;
}
