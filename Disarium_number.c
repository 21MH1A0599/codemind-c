#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,l=0,r1;
    int k,k1,s=0;
    scanf("%d",&n);
    k=k1=n;
    while(n)
    {
        r1=n%10;
        l+=1;
        n/=10;
    }
    while(l)
    {
        r1=k%10;
        s+=pow(r1,l);
        k/=10;
        l--;
    }
    if(k1==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

