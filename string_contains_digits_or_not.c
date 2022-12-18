#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int c=0;
        char str[100];
        scanf("%s",str);
        for(int j=0;str[j]!=NULL;j++)
        {
            if(str[j]>=48 and str[j]<=57)
            {
                c+=1;
                break;
            }
        }
        if(c>0) printf("Yes
");
        else printf("No
");
    }
}