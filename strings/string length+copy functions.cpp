#include<iostream>
using namespace std;
char* stringcopy (char*);
int lengthstr(char*);

char* stringcopy(char* orig)
{
	char *local = new char(lengthstr(orig)+1);
}



int main()
{
	char str[20];
	gets(str);
	cout << endl;
	puts(str);
	cout << endl << "LENGTH OF STRING" << lengthstr(str);
	
}

int lengthstr(char* str)
{
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
}


void strcopy(char* str)
{
	int i=0;
	char strr[20];
	cout << "New string =";
	while(str[i] != '\0')
	{
		strr[i]=str[i];
		i++;
	}
	puts(strr);
}
