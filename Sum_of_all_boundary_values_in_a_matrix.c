#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || i==c-1 || j==0 || j==r-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}