#include<stdio.h>
int leading(int n);
int main()
{
	int n=0;
	
	printf("Input number");
	scanf("%d", &n);
	printf("%d is the leading digit", leading(n));
}
int leading(int n)
{
	int first=n;
	while(first>=10)
	{
		first=first/10;
	}
	return first;
}
