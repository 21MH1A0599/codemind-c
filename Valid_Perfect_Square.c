#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,s,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
    s=sqrt(a);
    if(s*s==a)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}