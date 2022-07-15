#include<stdio.h>
int main()
{
    int r,c,i,j,m1=0,m2=0;
    scanf("%d %d",&r,&c);
    int arr[r][c],s1,s2;
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
        if(s1>m1)
        {
            m1=s1;
        }
    }
    for(j=0;j<c;j++)
    {
        s2=0;
        for(i=0;i<r;i++)
        {
            s2+=arr[i][j];
        }
        if(s2>m2)
        {
            m2=s2;
        }
    }
    if(m1>m2)
    {
        printf("%d",m1);
    }
    else
    {
        printf("%d",m2);
    }
}