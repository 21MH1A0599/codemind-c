#include<stdio.h>
void self(int n)
{
    int d,r,c,temp;
    d=0;
    c=0;
    temp=n;
    while(n)
    {
        r=n%10;
        if(r!=0 && temp%r==0)
        {
            d+=1;
        }
        n/=10;
        c+=1;
    }
    if(c==d)
    {
        printf("%d ",temp);
    }
}
int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        self(i);
    }
}