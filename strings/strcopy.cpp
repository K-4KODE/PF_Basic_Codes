#include<iostream>
using namespace std;

int main()
{
	char str[20];
	char strr[20];
	gets(str);
	cout << endl;
	puts(str);
	int i=0;
	cout << "New string =";
	while(str[i] != '\0')
	{
		strr[i]=str[i];
		i++;
	}
	puts(strr);
}
