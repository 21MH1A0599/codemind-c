#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=sqrt(a[i]);
        if(s*s==a[i])
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}