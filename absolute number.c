#include<stdio.h>
int absolute(int number);
int main()
{ 
	int number=0, x=0;
	printf("Input number");
	scanf("%d", &number);
	x=absolute(number);
	printf("%d is the absolute number", x);
} 

int absolute(int number)
{
	if(number<0)
	{
		number=number*(-1);
		return number;
		//printf("%d is the absolute number", number);
	}
	else
	{
		//printf("%d is the absolute number", number);
		return number;
	}
}
