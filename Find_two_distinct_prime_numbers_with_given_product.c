#include<stdio.h>
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(prime(i) && prime(j) && n==i*j && i<j)
            {
                printf("%d %d",i,j);
                c+=1;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}