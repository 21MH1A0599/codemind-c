#include<stdio.h>
int main()
{
    int c;
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        c=0;
        for(int j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j] and i!=j)
            {
                c+=1;
            }
        }
        if(c==0)
        {
        printf("%d",i);
        break;
        }
    }
    if(c>0)
    printf("-1");
}