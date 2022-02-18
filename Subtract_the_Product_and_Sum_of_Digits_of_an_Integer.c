#include<stdio.h>
int main()
{
    int n,r,s=0,m=1,res;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s+=r;
        m*=r;
        n/=10;
    }
    res=m-s;
    printf("%d",res);
}