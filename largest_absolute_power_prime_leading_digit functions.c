#include<stdio.h>
int lrgst(int a,int b,int c);
int absl(int d);
int pwr(int e);
int primenmbr(int f);
int leaddgt(int g);
int main()
{
	int c;
	printf("\n\n\n1.Find Largest Number");
	printf("\n2.Find Absolute Value");
	printf("\n3.Find Highest Power");
	printf("\n4.Find Prime Number");
	printf("\n5.Find Leading Digit");
	printf(" \nEnter your Choice: ");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				int s,t,u,l;
				printf(" Enter three Integers ");
				scanf("%d%d%d",&s,&t,&u);
				l=lrgst(s,t,u);
				printf(" \nThe Largest number is: %d ",l);
				break;
			}
		case 2:
			{
				int r,abs;
				printf(" Enter a Real Number ");
				scanf("%d",&r);
				abs=absl(r);
				printf(" \nThe absolute value of %d is: %d ",r,abs);
				break;
			}
		case 3:
			{
				int v,b;
				printf(" Enter a +ve Integer ");
				scanf("%d",&v);
				b=pwr(v);
				printf(" \nThe power of 2 is: %d",b);
				break;
			}
		case 4:
			{
				int pnmbr,pr;
				printf("Enter a +ve integer");
				scanf("%d",&pr);
				pnmbr=primenmbr(pr);
				if(pnmbr==1)
				{
					printf(" since returned is : %d, thus its prime number ");
				}
				else
				{
					printf(" since returned is : %d ,thus its not a prime number ");
				}
				break;
			}
			case 5:
			{
				int ld,dgt;
				printf("Enter a +ve integer");
				scanf("%d",&dgt);
				if(dgt>0)
				{
					ld=leaddgt(dgt);
				}
				else
				{
					printf(" \nWrong Input ");
				}
				printf("\nThe leading digit is : %d",ld);
				break;
			}
			default: 
			printf("Invalid Choice");
	} 
	return (0);
}
int lrgst(a,b,c)
{
	int temp;
	if(a>b)
	{
		if(a>c)
		{
			temp=a;
		}
	}
	else
	{
		if(b>c)
		{
			temp=b;
		}
		else
		{
			temp=c;
		}
	}
	return (temp);
}
int absl(int d)
{
	if(d>0)
	{
		return (d);
	}
	else
	{
		return (d*(-1));
	}
}
int pwr(int e)
{
	int i=2,ret=1;
	for(i=2;i<=e;i=i*2)
	{
		ret=i;
	}
	return (ret);
}
int primenmbr(int f)
{
	int i,n,count=0;
	for(i=1;i<=f;i++)
	{
		if(f%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		n=1;
	}
	else
	{
		n=0;
	}
	return (n);
}
int leaddgt(int g)
{
	int n=g,i;
	for(i=1;n>10;i++)
	{
		n=n/10;
	}
    return (n);
}

