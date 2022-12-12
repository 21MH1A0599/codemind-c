#include<stdio.h>
int divi(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    if(c==9)
    return 1;
    else return 0;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(divi(i))
        {
            c+=1;
        printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d",c);
}