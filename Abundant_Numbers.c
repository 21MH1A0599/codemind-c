#include<stdio.h>
int main()
{
    int n,i;
    int s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s+=i;
    }
    if(s>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}