#include<stdio.h>
int main()
{
    char str[100],max=str[0];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
    }
    printf("%c",max);
}