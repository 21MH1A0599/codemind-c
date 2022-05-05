#include<stdio.h>
int main()
{
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count1+=1;
        }
        else
        {
            count2+=1;
        }
    }
    printf("%d %d",count1,count2);
}