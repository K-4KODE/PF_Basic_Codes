#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number");
	scanf("%d",&a);
	b=a-1;
	while(b>=1){
	   a=a*b;
		b--;
	}
printf("factorial is %d",a);	
}
