#include<stdio.h>
int reverse(int num)
{
    int r,rev=0;
    while(num)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    return rev;
}
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i==reverse(i))
        {
            printf("%d ",i);
        }
    }
}