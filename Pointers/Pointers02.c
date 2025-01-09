 #include <stdio.h>
int main()
 {
    int m = 29;
    int *ab;
    ab = &m;

    printf("Address of m: %x\n",&m);
    printf("Value of m: %d\n", *ab);
    printf("\n");
    printf("ab is assigned with the address of m.\n");
    printf("Address of pointer ab: %x\n",&ab);
    printf("Value at pointer ab: %d\n", *ab);
    printf("\n");
    m = 34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab: %x\n",&ab);
    printf("Value at pointer ab: %d\n", *ab);
    printf("\n");
    *ab = 7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m: %x\n", &m);
    printf("Value of m: %d\n", m);

    return 0;
}
