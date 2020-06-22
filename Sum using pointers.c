#include<stdio.h>
int main()
{
	int a,b,*ptr1,*ptr2,sum;
	printf("Enter both numbers: ");
	scanf("%d%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	sum=*ptr1+*ptr2;
	printf("Sum of %d and %d is %d",a,b,sum);
}
