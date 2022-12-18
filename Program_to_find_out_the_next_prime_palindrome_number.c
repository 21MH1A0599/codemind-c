#include<stdio.h>
int prime(int n)
{
    if(n==1)
    {
        return 0;
    }
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int palin(int n)
{
    int t=n,rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==t) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(prime(i) && palin(i))
        {
            printf("%d",i);
            break;
        }
    }
}