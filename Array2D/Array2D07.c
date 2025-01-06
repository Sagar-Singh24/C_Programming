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
    int transpose[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of a matrix is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}