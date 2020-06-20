#include <stdio.h>
void largest(int n1, int n2, int n3);
int main()
{ 
	int n1=0,n2=0,n3=0;
	printf("Enter first number");
	scanf("%d", &n1);
	printf("Enter second number");
	scanf("%d", &n2);
	printf("Enter third number");
	scanf("%d", &n3);
	largest(n1,n2,n3);
}
	  

void largest(int n1, int n2, int n3)
{
	if (n1>n2 && n1>n3)
	{
		printf("%d is the largest number", n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("%d is the largest number", n2);
	}
	else
	{
		printf("%d is the largest number", n3);
	}
}

