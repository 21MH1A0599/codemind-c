#include<stdio.h>
int main()
{
    int r,c,i,j,max=0,max1=0;
    scanf("%d %d",&r,&c);
    int arr[r][c],s1=0,s2=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s1=0;
        for(j=0;j<c;j++)
        {
            s1+=arr[i][j];
        }
        if(s1>max)
        {
            max=s1;
        }
    }
    for(j=0;j<c;j++)
    {
        s2=0;
        for(i=0;i<r;i++)
        {
            s2+=arr[i][j];
        }
        if(s2>max1)
        {
            max1=s2;
        }
    }
    if(max>max1)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d",max1);
    }
}