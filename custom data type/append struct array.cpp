#include<iostream>
using namespace std;

int main()
{
	struct record
	{
		int SNo;
		char *name;
		char *phone;
		char *address;
	}
	
	record Z[10];
	
	FILE *fptr;
	char name[20];
	char no[5];
	
	fptr=fopen("record.txt","a");
	
	int i = 0;
	for(i=0;i<=10;i++)
	{
		Z[i]=get(Z.name);
		fprintf(fptr,"%d %c", i,Z.name);
	}
	fclose(fptr)
	return 0;
}
