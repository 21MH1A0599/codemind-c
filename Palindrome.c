#include<stdio.h>
int main()
{
    int n,r,k,rev=0;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(k==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}