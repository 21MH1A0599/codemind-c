#include<stdio.h>
int main()
{
    int r,c,i,j,max;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        max=0;
        for(i=0;i<r;i++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        printf("%d
",max);
    }
}