#include<stdio.h>
int main()
{
    int r,c,i,j,s1=0;
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
                s1+=arr[i][j];
        }
    }
    printf("%d",s1);
}