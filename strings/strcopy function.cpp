#include<iostream>
using namespace std;
void strcopy(char*);


int main()
{
	char str[20];
	gets(str);
	cout << endl;
	puts(str);
	strcopy(str);
	
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
