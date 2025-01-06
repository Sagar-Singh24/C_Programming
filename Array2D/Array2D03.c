#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        printf("Enter element[%d][%d]: ",i,j);
        scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("Sum of all elements of array is: %d",sum);
    return 0;
}   