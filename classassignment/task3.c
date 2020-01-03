#include <stdio.h>
int main ()
{
	int a;
	int b;
	int t;
	char c;
	
	printf("Enter an operator (+,-,*,/)");
	scanf("%c", &c);
	
	printf("Enter number 1 ");
	scanf("%d", &a);
	
	printf("Enter number2 ");
	scanf("%d", &b);	
	
	switch (c)
	{
		case '+':
		c=a+b;
		printf("%d", c);
		
		case '-':
		c=a-b;
		printf("%d", c);
		
		case '*':
		c=a*b;
		printf("%d", c);
		
		case '/':
		c=a/b;
		printf("%d", c);		
	}


}
