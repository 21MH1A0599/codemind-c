#include<stdio.h>
int main()
{
    int n,i,c1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        c1=0;
        for(int j=0;j<n;j++)
        {
        if(arr[i]>arr[j]){
            c1+=1;
        }
        }
        printf("%d ",c1);
    }
}