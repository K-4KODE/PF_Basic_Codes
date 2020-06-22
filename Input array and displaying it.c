//Taking input in an array passing it to a function and displaying it using pointers
#include<stdio.h>

void display(int *a,int n)
{
	int i,j=1;
	for (i=0;i<n;i++)
	{
		printf("Your input# %d was %d\n",j,*a);
		a++;
		j++;
	}
}
int main()
{
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter# %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	display (a,n);
}
