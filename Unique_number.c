#include<stdio.h>
int main()
{
    int n,r,i;
    scanf("%d",&n);
    static int arr[10];
    while(n!=0)
    {
        r=n%10;
        arr[r]++;
        n/=10;
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>1)
        {
            printf("Not Unique Number");
            break;
        }
    }
    if(i==10)
    {
        printf("Unique Number");
    }
}