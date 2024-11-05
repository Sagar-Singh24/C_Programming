// Sum of Numbers

#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    printf("The sum of all numbers from 1 to %d is %d\n", n, sum);
    return 0;
}
