#include<stdio.h>
int main()
{
    int n,i,a=0,b=0;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        a+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
        b+=brr[i];
    }
    if(b-a<0) printf("0");
     else printf("%d",b-a);
}