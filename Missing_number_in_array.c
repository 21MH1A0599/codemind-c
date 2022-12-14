#include<stdio.h>
int main()
{
    int t,n,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<=n;i++)
        {
            c=0;
            for(int j=0;j<n-1;j++)
            {
                if(i==arr[j])
                {
                    c++;
                }
            }
            if(c==0)
            {
                printf("%d
",i);
                break;
            }
        }
    }
}