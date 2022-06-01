#include<stdio.h>
#include<math.h>
int main()
{
    int n,s1=0,s2=0,s3=0,r;
    scanf("%d",&n);
    int l=log10(n)+1;
    while(n)
    {
        r=n%10;
        if(r%2==0)
        {
           s1+=1;
        }
        else if(r%2==1)
        {
           s2+=1; 
        }
        else
        {
            s3+=1;
        }
        n/=10;
    }
    if(l==s1)
    {
        printf("Even
");
    }
    else if(l==s2)
    {
        printf("Odd
");
    }
    else
    {
        printf("Mixed
");
    }
}