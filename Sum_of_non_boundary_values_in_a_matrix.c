#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[r][c],s1=0,s2=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if (i==0 || i==r-1 || j==0 || j==c-1)
            {
                s1+=a[i][j];
            }
            else
            {
            s2+=a[i][j];
            }
        }
    }
    printf("%d",s2);
}