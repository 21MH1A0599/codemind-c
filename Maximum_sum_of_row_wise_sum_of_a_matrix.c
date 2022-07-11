#include<stdio.h>
int main()
{
    int r,c,i,j,sum,max=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d",max);
}