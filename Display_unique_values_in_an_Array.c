#include<stdio.h>
int main()
{
    int n,c=0,k=0;
    scanf("%d",&n);
    int arr[n],i,j;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c+=1;
            }
        }
        if(c==0)
        {
            printf("%d ",arr[i]);
        }
        else{
            k+=1;
        }
    }
    if(k==n)
    {
        printf("-1");
    }
}