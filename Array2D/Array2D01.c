#include<stdio.h>
int main()
{
    int arr[2][3];
    int i,j,sum=0;
    for( i=0;i<2;i++)
    {
        for( j=0;j<3;j++)
        {
             printf("element - [%d],[%d] : ", i, j);
            scanf("%d",&arr[i][j]);
            sum[i][j] = M1[i][j] + M2[i][j];
        }
    }
    return 0;
}