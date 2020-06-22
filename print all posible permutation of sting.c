#include<stdio.h>
#include<string.h>
int number(int r);

int main()
{
	char a[4];
	char temp;
	int r,y;
	int i=0,j=0;
	printf("Enter String: ");
	scanf("%s",&a);
	r=strlen(a);
	y=number(r);
	
	for(i=0;i<r;i++)
	{
		//temp=a[i];
		while(j!=0)
		{
			
		}
	}
	
}
int number(int r)
{
	int a=r,b;
	b=a-1;
	while(b>=1){
	   a=a*b;
		b--;
	}
	printf("n factorial = %d",a);	
	return a;
}
