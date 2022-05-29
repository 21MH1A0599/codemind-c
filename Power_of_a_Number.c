#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x,r;
    scanf("%d %d %d",&a,&b,&c);
    x=pow(a,b);
    r=x%c;
    printf("%d",r);
}
    