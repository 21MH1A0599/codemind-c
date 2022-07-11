#include<stdio.h>
int main()
{
    int n,i;
    long long int a,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        s+=a;
    }
    printf("%lld",s);
}