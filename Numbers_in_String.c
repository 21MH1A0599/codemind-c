#include<stdio.h>
int main()
{
    int s=0;
    char str[100];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' and str[i]<='9')
        {
            s+=str[i]-'0';
        }
    }
    printf("%d",s);
}