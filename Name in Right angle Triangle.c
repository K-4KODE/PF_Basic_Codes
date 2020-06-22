#include<stdio.h>
#include <string.h>
int main()
{
	int r,sp=5,i,j;
	char str[20];
	printf("Input Name: ");
	scanf("%s",&str);
	printf("%s", str);
	r=strlen(str);
	for(i=0;i<=r;i++)
	{
		for(sp=6-i;sp>0;sp--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("\t%c ",str[j]);
		}
		printf("\n");
	}
}
