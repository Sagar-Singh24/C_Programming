// Using Operators using User Input.

# include<stdio.h>
int main(){
               int a,b;
               float c,d;
               printf("Enter the four number\n");
               scanf("%d%d%f%f",&a,&b,&c,&d);
               printf("The sum for int is = %d\n",a+b);
               printf("The diffrence is = %d\n",a-b);
               printf("The sum for float is = %0.1f\n",c+d);
               printf("The diffrence is = %0.1f\n",c-d);
    return 0;
}
