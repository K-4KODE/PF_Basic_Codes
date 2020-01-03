#include <iostream>
using namespace std;

void MT(int);

int main()
{
	int number=0;

	
	cout << "INPUT Number";
	cin >> number;
	
	asn(number);	
	return 0;
}

void MT (int number)
{
	int output;
	for (int i=1;i<11;i++)
	{
		output=  number*i;
		cout << endl << number << " * " << i << " = " << output; 
	}
}
