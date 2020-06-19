#include<stdio.h>
int main(){
	int year;
	printf("Enter Year");
	scanf("%d",&year);
	while(year!=0){
		if(year>1000)
		{
			printf("M");
			year=year-1000;
		}
		else if(year>500)
		{
			printf("D");
			year=year-500;
		}
		else if(year>100)
		{
			printf("C");
			year=year-100;
		}
		else if(year>50)
		{
			printf("L");
			year=year-50;
		}
		else if(year>10)
		{
			printf("X");
			year=year-10;
		}
		else if(year>5)
		{
			printf("V");
			year=year-5;
		}
		else if(year>1)
		{
			printf("I");
			year=year-1;
		}
	}
}
