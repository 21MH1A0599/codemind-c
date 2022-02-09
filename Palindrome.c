#include<stdio.h>
int reverse(int num)
{
	int r,rev=0;
	while(num)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	return rev;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(reverse(n)==n)
	printf("True");
	else
	printf("False");
}