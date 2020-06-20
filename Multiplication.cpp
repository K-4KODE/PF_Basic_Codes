#include<stdio.h>
int add(int x,int y);
int main()
{
	int a,b,mul=0,i;
	printf("Enter numbers:");
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		mul=add(mul,a);
	}
	printf("Multiplication is %d",mul);
}
int add(int x,int y)
{
	int d;
	while(y!=0)
	{
		d=(x&y)<<1;
		x=x^y;
		y=d;
	}
	return x;
}
