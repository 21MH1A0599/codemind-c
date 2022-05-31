#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,d,r;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      d=log10(a[i])+1;
            if(d%2==0)
            {
                s+=1;
            }
    }
    printf("%d",s);
}