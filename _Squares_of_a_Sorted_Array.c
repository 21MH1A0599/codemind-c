#include<stdio.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]=arr[i]*arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}