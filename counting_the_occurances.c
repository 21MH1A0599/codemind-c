#include<stdio.h>
int main()
{
    int c1=0;
    char str[1000],a;
    scanf("%[^
]s",str);
    scanf("%s",&a);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==a)
        {
            c1+=1;
        }
    }
    if(c1==0)
    {
        printf("-1");
    }
    else{
    printf("%d",c1);
    }
}