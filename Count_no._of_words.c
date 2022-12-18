#include<stdio.h>
int main()
{
    char str[1000];
    int c=1;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c+=1;
        }
    }
    printf("%d",c);
}