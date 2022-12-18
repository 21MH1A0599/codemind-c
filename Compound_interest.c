#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    double c;
    scanf("%d%d%d",&p,&r,&t);
    c=pow((1+r/100.00),t);
    printf("%.2f",p*c);
}