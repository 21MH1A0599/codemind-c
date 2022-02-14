#include<stdio.h>
int main()
{
	int n,r,ori,sum=0;
	scanf("%d",&n);
	ori=n;
	while(n>0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	if(ori%sum==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}