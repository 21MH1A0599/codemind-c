#include<stdio.h>
int prime(int n)
{
    if(n==1) return 0;
    for(int i=2;i<n/2;i++)
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
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;;i++)
    {
        if(prime(a+b+i))
        {
            printf("%d",i);
            break;
        }
    }
}