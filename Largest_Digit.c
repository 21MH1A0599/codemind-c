#include<stdio.h>
int main()
{
    int n,lar=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(r>lar)
        {
            lar=r;
        }
        n/=10;
    }
    printf("%d",lar);
}