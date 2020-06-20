#include<stdio.h>
void toBinary(int x);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	toBinary(x);
}
void toBinary(int x)
{
	int r,b=0,i=1;
	while(x!=0)
	{
		r=x%2;
		x=x/2;
		b=b+(r*i);
		i=i*10;
	}
	printf("The value in binary is %d",b);
}
