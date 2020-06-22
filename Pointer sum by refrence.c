#include<stdio.h>
int sum2nums(long*num1,long*num2)
{
	long sum;
	sum=*num1+*num2;
	return(sum);
}
int main()
{
	long a,b,sum;
	printf("Enter 2 Numbers: ");
	scanf("%ld%ld",&a,&b);
	sum=sum2nums(&a,&b);
	printf("Sum of %ld and %ld is %ld",a,b,sum);
}
