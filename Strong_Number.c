#include<stdio.h>
int factorial(int n)
{
    int i,fac=1;
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        r=n%10;
        s+=factorial(r);
        n/=10;
    }
    if(t==s)
    {
        printf("The number %d is a strong number
",t);
    }
    else
    {
        printf("The number %d is not a strong number
",t);
    }
}