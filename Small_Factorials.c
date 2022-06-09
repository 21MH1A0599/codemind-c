#include<stdio.h>
int factorial(int n)
{
    int i,fac=1;
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}
int main()
{
    int n,i,res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);  
    }
    for(i=0;i<n;i++)
    {
        res=factorial(arr[i]);
        printf("%d
",res);
    }
}