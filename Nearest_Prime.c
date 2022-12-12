#include<stdio.h>
#include<math.h>
int prime(int n)
{
    if(n==1)
    {
        return 0;
    }
    for(int i=2;i<=n/2;i++)
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
    int n,m,k,a,b,c,d;
    scanf("%d",&k);
    for(int j=0;j<k;j++)
    {
        scanf("%d",&n);
    for(int i=n-1;i>=1;i--)
    {
        if(prime(i))
        {
            a=i;
            break;
        }
    }
    m=n;
    while(m!=0)
    {
        if(prime(m))
        {
            b=m;
            break;
        }
        m+=1;
    }
    c=abs(n-a);
    d=abs(b-n);
    if(c>d){
        printf("%d
",b);
    }
    else if(c<d)
    {
        printf("%d
",a);
    }
    else if(c==d){
        printf("%d
",a);
    }
    }
}